//coded by vyslcbn
//Project039
//Kullan�c�dan al�nan bir ondal�kl� say�n�n karesini al�p ekrana yazd�ran bir program 


#include <stdio.h>
#include <math.h>

main(){
	double num, karesi;
	
	printf("Ondalikli sayiyi giriniz :");
	scanf("%lf",&num);
	
	karesi = num*num;
	
	printf("Girdiginiz sayinin karesi : %lf", karesi);
	
	return 0;
	
}




