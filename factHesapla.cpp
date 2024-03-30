#include<stdio.h>

int main(){
	
	int x,fact=1,temp;
	printf("Faktorileli bulunmasý istediginiz sayiyi giriniz:\t");
	scanf("%d",&x);
	temp = x;
	printf("x \t");
	while(x!=0){
		printf("%d\t",x);
		
		
		fact = fact* x;
		x--;
		
	}
	printf("\n");
	fact = 1;
	printf("fact: \t");
	while(temp!=0)
	{
		printf("%d\t",fact);
		fact = fact* temp;
		temp--;
	
	}
	
	


	
	
	
	
	
	
	
	
	return 0;
}
