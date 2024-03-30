#include<stdio.h>

int main(){
	
	 
 
     //Fibonacci Dizisi ,girilen sayý kadar fibonacci üçgeni olusturuyor
     int girilenSayi;
     printf("Sayiyi giriniz: ");
     scanf("%d",&girilenSayi);

     for(int i = 1; i <= girilenSayi; i++) //Her satýr için aþaðýdaki iþleri yap
     {
         for(int bosluk = girilenSayi-i; bosluk>=1; bosluk--)
         {
             printf("  "); // 2 bosluk
         }

         
         for(int j = 1; j <=i; j++) // 1 den baþla hangi satýrdaysan ,satýr sayýsýna kadar 1 den baþlayarak yaz
         {
             printf("%d ",j);
             
         }

         for(int k = i - 1; k >= 1; k--) // Satýr sayýsýný en ortaya yazdýktan sonra sayýlarý 1'e kadar tek tek yaz.
         {
             printf("%d ",k);

         }
         printf(" \n");
     }
    
     
     
     /* 
 Satýr sayýsý    Eleman Sayýsý
      1               1
      2               3
      3               5
      4               7
      5               9
     
     
     bosluk sayisi=>  8-7-4
      */

	
	
	
	
	return 0;
}

