#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	/*
	char kitapadi[30] ;
	printf("Kitabin Adini Giriniz : ");
	scanf("%s" , kitapadi); 
	printf("Girmis oldugunuz kitap : %s" ,kitapadi);
	*/
	
	char ad[10],soyad[10],yas[2],sehir[12],meslek[13];
	printf("adiniz : ");
	scanf("%s" , ad);
	
	printf("soyadiniz : ");
	scanf("%s",soyad);
	
	printf("yasiniz : ");
	scanf("%s", yas);
	
	printf("sehriniz : ");
	scanf("%s", sehir);
	
	printf("mesleginiz : ");
	scanf("%s", meslek);
	
	printf("adiniz : %s \n" , ad);
	printf("soyadiniz : %s \n" , soyad);
	printf("yasiniz : %s \n" , yas);
	printf("sehriniz : %s \n", sehir);
	printf("mesleginiz : %s" , meslek);
	
	
	return 0;
}
