#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	//ÇEKÝLÝÞ UYGULAMASI
	char isim[10],soyisim[10];
	int sayi;
	int secim;
	printf("SANSLI CEKILIS UYGULAMAMIZA HOSGELDINIZ!!!\nLutfen isminizi giriniz: ");
	scanf("%s",&isim);
	printf("Soyisminizi giriniz: ");
	scanf("%s",&soyisim);
	
	printf("Asagidakilerden bir secim yapiniz.\n[1]-Sansli cekilisi dene!\n[2]-Kullanici bilgilerinizi kontrol ediniz.");
	printf("\nLutfen bir secim yapiniz.");
	scanf("%d",&secim);
	
	if(secim==1){
		printf("Su anda cekilis uygulamasindasiniz bir ile bes arasi bir sayi seçiniz.");
		scanf("%d",&sayi);
		int randomSayi=1+rand()%5;
		
		if(sayi==randomSayi){
			printf("Sectiginiz sayi:%d\nRandom sayi:%d",sayi,randomSayi);
			printf("\nTEBRIKLER KAZANDINIZ!!!");
		}
		else{
			printf("Sectiginiz sayi:%d\nRandom sayi:%d",sayi,randomSayi);
			printf("Tekrar deneyiniz.");
		}
	}
	else{
		printf("Kullanici isminiz:%s\nKullanici soyiminiz:%s",isim,soyisim);
	}
	return 0;
}
