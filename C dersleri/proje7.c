#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// float deðiþkenler
	// %f
	/*
	float sayi1 , sayi2 , bolum ;
	
	sayi1 = 7 ;
	sayi2 = 4 ;
	bolum = sayi1 / sayi2 ;
	 printf("%f" , bolum);
	 */ 
	 float sayi1 , sayi2 ,toplam ;
	 printf("birinci sayiyi giriniz : ");
	 scanf("%f",&sayi1 );
	 
	 printf("ikinci sayiyi giriniz : ");
	 scanf("%f",&sayi2);
	 
	 toplam = sayi1 + sayi2 ;
	 printf("toplamin sonucu : %f" , toplam); 
	 
	 
	 
	return 0;
}
