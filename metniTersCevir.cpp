#include<stdio.h>
#include<string.h>

void terscevirme(char array1[]){
	
	
	int i,gecici,uzunluk;
	uzunluk =strlen(array1);
	
	for(i=0; i < (uzunluk)/2 ; i++){
		
		
		gecici= array1[i];
		array1[i] = array1[uzunluk-1-i];
		array1[uzunluk-1-i] = gecici;		
	}	
	printf("%s",array1);
}

int main(){
	
	
	
	
	char text[300];
	printf("Metini giriniz:\n");
	
	scanf("%s",text);
	

	terscevirme(text);
	
	
	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
