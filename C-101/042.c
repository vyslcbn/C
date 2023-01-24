//coded by vyslcbn
//Project042
//Dosya Acma

/*
"r" (Read-only): Dosya sadece okunabilir. Dosya mevcut de�ilse "fopen" fonksiyonu "NULL" de�erini d�nd�r�r.
"w" (Write-only): Dosya sadece yaz�labilir. Dosya mevcut de�ilse, "fopen" fonksiyonu yeni bir dosya olu�turur. Dosya mevcutsa, i�eri�i silinir.
"a" (Append-only): Dosya sadece yaz�labilir. Dosya mevcut de�ilse, "fopen" fonksiyonu yeni bir dosya olu�turur. Dosya mevcutsa, i�eri�i silinmez ve yeni veriler dosyan�n sonuna eklenir.
"r+" (Read and Write): Dosya hem okunabilir hem de yaz�labilir. Dosya mevcut de�ilse, "fopen" fonksiyonu "NULL" de�erini d�nd�r�r.
"w+" (Read and Write): Dosya hem okunabilir hem de yaz�labilir. Dosya mevcut de�ilse, "fopen" fonksiyonu yeni bir dosya olu�turur. Dosya mevcutsa, i�eri�i silinir.
"a+" (Read and Append): Dosya hem okunabilir hem de yaz�labilir. Dosya mevcut de�ilse, "fopen" fonksiyonu yeni bir dosya olu�turur. Dosya mevcutsa, i�eri�i silinmez ve yeni veriler dosyan�n sonuna eklenir.
*/

#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("example.txt","a");
	
	//Dosya islemleri burada gerceklesir
	
	//Dosya Kapatma
	fclose(fp);
	return 0;
}

