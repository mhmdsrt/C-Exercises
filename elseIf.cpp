#include<stdio.h>

int main() {
	
int vize1,vize2,final;
float dersort;
float okulortalama;


printf("vize1 notunu giriniz\n");
scanf("%d",&vize1);

printf("vize2 notunu giriniz\n");
scanf("%d",&vize2);

printf("final notunu giriniz\n");
scanf("%d",&final);
 
printf("Okul ortalamasini giriniz\n");
scanf("%f",&okulortalama);

dersort = (vize1*30/100.0) + (vize2*30/100.0) + (final*40/100.0);

if(dersort >= 90) {
	printf("Harf notunuz-AA ve ders ortalamaniz: %f dir\n",dersort);
}
else if (dersort >= 85 && dersort < 90 ){
	printf("Harf notunuz-BA ve ders ortalamaniz: %f dir\n",dersort);
}

else if (dersort >= 80 && dersort < 85 ){
	printf("Harf notunuz-BB ve ders ortalamaniz: %f dir\n",dersort);
}

else if (dersort >= 75 && dersort < 80 ){
	printf("Harf notunuz-BA ve ders ortalamaniz: %f dir\n",dersort);
}

else if (dersort >= 70 && dersort < 75 ){
	printf("Harf notunuz-CC ve ders ortalamaniz: %.0f dir\n",dersort);
	
	if(okulortalama < 2.5)
	printf("Dersi tekrar alman faydalý olur cunku ortlaman dusuk\n");
}

else if (dersort >= 65 && dersort < 70 ){
	printf("Harf notunuz-DC ve ders ortalamaniz: %f dir\n",dersort);
	
	if(okulortalama < 2.5)
	printf("Dersi tekrar alman faydalý olur cunku ortlaman dusuk\n");
}


else if (dersort >= 60 && dersort < 65 ){
	printf("Harf notunuz-DD ve ders ortalamaniz: %f dir\n",dersort);
	
	if (okulortalama < 2.5)
	printf("Dersi tekrar alman faydalý olur cunku ortlaman dusuk\n");
}
else {
	printf("Harf notunuz-FF : %f dir\n",dersort);
	printf("Dersten kaldiniz\n");
}
	
	return 0;
}
