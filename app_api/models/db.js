var mongoose = require('mongoose');
require("./mekansema"); 
//var dbURI = "mongodb://localhost/mekanbul";
var dbURI = "mongodb+srv://Alperen:gs123@mekanbul.o3mifiu.mongodb.net/mekanbul?retryWrites=true&w=majority";

mongoose.connect(dbURI);


mongoose.connection.on("connected", () => {
    console.log(dbURI + "adresindeki veri tabanin abaglandi");
});

mongoose.connection.on("error", () => {
    console.log("Baglanti hatasi");
});

mongoose.connection.on("disconnected", () => {
    console.log("BAglanti kesilidi");
});

function close(msg, callback) {
    mongoose.connection.close(() => {
        console.log(msg);
        callback();
    });
}
process.on("SIGINT", () => {
    close("Uygulama kapatilidi", () => {
        process.exit(0);
    });
});