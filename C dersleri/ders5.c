#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	int sayi1,sayi2,toplam ;

	printf("lutfen birinci sayiyi giriniz :  " );
	scanf("%d",& sayi1);
	
	printf("lutfen ikinci sayiyi giriniz :  " );
	scanf("%d", & sayi2);
	
    toplam = sayi1+sayi2 ;
	printf("toplam : %d",toplam);
	
	return 0;
}
