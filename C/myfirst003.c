#include <stdio.h>
#include <conio.h>

//��renci vize ve final notuna g�re ba�ar� durumu hesaplama

int main() {
	int v, f=0;
	float ont;
	int sor=1;
	
	
	Bsl:
				
	printf("\t\t\t\t\t\t_(MVC)_\n");
	
	Dvm:
	while (sor==1)
	{
		printf("\n Vize notunu giriniz:"); scanf("%d.&v");
		printf("\n Final notunu giriniz:"); scanf("%d.&f");		
		
		
	hsp:
	ont=(v*0.20)+(f*0.80);
	printf("\n Ortalama not= %f", ont);
	if(ont<50) {printf(\t Kal�r, Ba�ar�s�z.);}
	else if(ort>50 and ont<50) {printf(\t Bor�lu Ge�er.);}
	
	
	
			
		}	
		

	Son:
	printf("\t\t\t\t\t\t Program Bitti\n");	
	

	return 0;
}

