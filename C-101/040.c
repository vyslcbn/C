//coded by vyslcbn
//Project040
//Kullan�c�dan al�nan bir tam say�n�n pozitif mi negatif mi oldu�unu belirleyen program 


#include <stdio.h>
main(){
	int num;
	
	printf("Sayiyi Giriniz :");
	scanf("%d",&num);
	
	if(num > 0){
		printf("Girdiginiz sayi Pozitif bir sayidir.");
	}
	else if(num < 0){
		printf("Girdiginiz sayi Negatif bir sayidir");
	}
	else {
		printf("Girdiginiz Sayi Sifir");
	}
	
	return 0;

}




