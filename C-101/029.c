//coded by vyslcbn
//Project0
//Bir dizinin ortalamas�n� bulan program

#include <stdio.h>
#include <conio.h>

int main(){
	int dizi[100], n, toplam =0;
	float ortalama;
	int i;
	
	printf("Lutfen dizinin eleman sayisini girin: ");
	scanf("%d",&n);
	
	printf("Lutfen dizinin elemanlarini girin: ");
	for (i = 0; i < n; i++){
		
		scanf("%d", &dizi[i]);
		toplam += dizi[i];
	}
	
	ortalama = (float)toplam / n;
	printf("Dizinin ortalamas�: %f\n", ortalama);
	
	return 0;
	
}


