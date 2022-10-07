#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	int sayi = 6;
	
	if(sayi ==5)
	{
		printf("sayi 5' e esittir'");
	}
	else 
	{
		printf("sayi 5' e esit degildir ");
	}
	
	*/
	int sayi1 , sayi2 , toplam ;
	
	sayi1 = 25 ;
	sayi2 = 34 ;
	toplam = sayi1 + sayi2 ;
	
	if(toplam> 50)
	{
		printf("toplam degeriniz : %d - 50 den buyuk" + toplam);
		
	}
	else
	{
		printf ("toplam degeriniz : %d - 50 den kucuk" + toplam);
	}
	
	
	
	
	return ;
}
