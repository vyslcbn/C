//coded by vyslcbn
//Project038
//Kullan�c�dan al�nan iki tam say�n�n fark�n� ve �arp�m�n� bulan program 

#include <stdio.h>


main(){
	int num1, num2, fark ,carp;
	
	printf("Iki adet sayi girin :");
	scanf("%d %d", &num1, &num2);
	
	fark = num1 - num2;
	carp = num1 * num2;
	
	
	printf("Iki sayinin farki : %d",fark);
	printf("\nIki sayinin carpimi : %d",carp);

	
	return 0;
	
}


