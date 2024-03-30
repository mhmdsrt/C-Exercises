#include<stdio.h>

int main(){
int girilenSayi;
printf("Sayiyi giriniz: ");
scanf("%d",&girilenSayi);

for(int i = 1; i <= girilenSayi; i++) //satir sayisi
{
    for(int m = girilenSayi - i; m >= 1; m--) // her satýrýn boþluk sayisi
    {
         printf(" ");
    }

    for(int j = 1; j <= i; j++)
    {
         printf("*");
    }
    for(int k = i - 1; k >= 1; k--)
    {
         printf("*");

    }
    printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
