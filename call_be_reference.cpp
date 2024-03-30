#include<stdio.h>


void callbyvalue(int *x,int *y){
	
	int z=0;
	
	
	z = *x;
	
	 *x = *y; 
	 
	 *y = z ;
	 
	 printf("%d  %d \n",*x,*y);
	
	
	
	
	
	
}














int main(){
	
	int a=10,b=20;
	
	callbyvalue(&a,&b);
	
	printf("%d %d",a,b);
	
	
	
	
	
	
	
	return 0;
}
