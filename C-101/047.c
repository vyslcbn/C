//coded by vyslcbn
//Project048
//Dosyalama/ Ad Soyad Telefon No Bulma Programi

#include <stdio.h>
FILE *dosya;

main(){
	char ad[30], soyad[30], telefon[12];
	int no; 
	int id; 
	
	dosya = fopen("kisibilgi.txt","r");
	
	printf("Kisi no girin :");
	scanf("%d",&id);
	
	while(!feof(dosya)){
		fscanf(dosya,"%s %s %s %d", &ad, &soyad, &telefon, &no);
		
		if(id==no){
			printf("%s %s %s %d", ad, soyad, telefon, no);			
		}
	}
	
	fclose(dosya);
	getch();
}


                                                                                                               
