#include<stdio.h>

int main(){
	
	 
 
     //Fibonacci Dizisi ,girilen say� kadar fibonacci ��geni olusturuyor
     int girilenSayi;
     printf("Sayiyi giriniz: ");
     scanf("%d",&girilenSayi);

     for(int i = 1; i <= girilenSayi; i++) //Her sat�r i�in a�a��daki i�leri yap
     {
         for(int bosluk = girilenSayi-i; bosluk>=1; bosluk--)
         {
             printf("  "); // 2 bosluk
         }

         
         for(int j = 1; j <=i; j++) // 1 den ba�la hangi sat�rdaysan ,sat�r say�s�na kadar 1 den ba�layarak yaz
         {
             printf("%d ",j);
             
         }

         for(int k = i - 1; k >= 1; k--) // Sat�r say�s�n� en ortaya yazd�ktan sonra say�lar� 1'e kadar tek tek yaz.
         {
             printf("%d ",k);

         }
         printf(" \n");
     }
    
     
     
     /* 
 Sat�r say�s�    Eleman Say�s�
      1               1
      2               3
      3               5
      4               7
      5               9
     
     
     bosluk sayisi=>  8-7-4
      */

	
	
	
	
	return 0;
}

