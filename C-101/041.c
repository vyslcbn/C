//coded by vyslcbn
//Project041
//Kullan�c�dan al�nan bir tam say�n�n 0'dan b�y�k veya k���k oldu�unu bulan program 


#include <stdio.h>

main(){
	int num;
	
	printf("Sayiyi Giriniz :");
	scanf("%d",&num);
	
	if(num > 0){
		printf("Girdiginiz sayi Sifirdan buyuk bir sayidir.");
	}
	else if(num < 0){
		printf("Girdiginiz sayi Sifirdan kucuk bir sayidir");
	}
	else {
		printf("Girdiginiz Sayi Sifir");
	}
	
	return 0;

}




