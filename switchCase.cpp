#include<stdio.h>

int main() {
	
int islem;
int bakiye = 1000;
int tutar;



while(true)
{
	printf("�slemler:\n1:paracekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");
 
  	printf("islem seciniz\n");
	scanf("%d",&islem);

	switch(islem) {
	
	case 1:
	printf("Bakiyeniz %d dir\n",bakiye);
	printf("cekilecek tutar�n� giriniz:\n");
	scanf("%d",&tutar);

	if(tutar > bakiye){
		printf("bakiyeniz yetersizdir\n");
	}

	else  bakiye -=tutar;
	 printf("Kalan bakiyeniz: %d dir",bakiye);
	 break;
	 
	
	case 2:
	printf("Bakiyeniz %d dir\n",bakiye);
	printf("yat�r�l�cak tutar�n� giriniz:\n");
	scanf("%d",&tutar);
	bakiye += tutar;
	printf("yeni bakiyeniz %d dir",bakiye);
	break;
	
	
	case 3:
	printf("Bakiyeniz %d dir\n",bakiye);
	printf("Havale yapilacak tutar�n� giriniz:\n");
	scanf("%d",&tutar);
	if(tutar > bakiye){
		printf("bakiyeniz yetersizdir\n");
	}
	bakiye -= tutar;
	printf("Kalan bakiyeniz %d dir",bakiye);
	break;
	
	
	
	case 4:
	printf("Mevcut Bakiyeniz %d dir\n",bakiye);
    break;
    
    case 5:
    printf("Kart iade edildi\n");
    break;
    
    default:
    printf("Ge�ersiz sayi girdiniz\n");
	
}
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
