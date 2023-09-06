#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sirasayi=0 ,x=1, cikis, sonuckontrol;
	float sonucsira,a ;
	char sira;

	while(x)
	{
	printf("Lutfen sira almak icin 's' harfini sonuc gostermek icin 'y' harfini tuslayin:");
	scanf(" %c", &sira);
switch (sira){
		case 's' :
		case 'S' :
			sirasayi=sirasayi+1;
			sonucsira=sirasayi+0.5;
			a=sonucsira;
			printf("Siraniz %d \n", sirasayi);
		break;
		
		case 'y' :
		case 'Y' :
			if(a==sonucsira){
				sonuckontrol=sonuckontrol+1;
				printf("Siraniz %.1lf \n", sonucsira);}
			
			else{
				printf("Hatali giris, lutfen bir sonraki sira alan kisiyi bekleyin!\n");
				}
			a=sonucsira+1;	
		break;
		
		case 'q' :
		case 'Q' :
			printf("lutfen cikis yapmak icin sifreyi giriniz: ");
			scanf("%d",&cikis);
			if(cikis==9999){
				printf("\nCikis basariyla gerceklestirildi.\n");
				printf("Toplam alinan sira sayisi = %d\n", sirasayi);
				printf("Toplam sonuc gosteren sayisi =%d", sonuckontrol);
				x=0;
				}
				else{
					printf("Sifreyi yanlis tusladiniz!\n");
				}
		break;
		

	}
	
		}
	getch ();	 	
	return 0;
}
