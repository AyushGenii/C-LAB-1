#include<stdio.h>
int main(){
	char car;
	printf("Enter a character ");
	scanf("%c",&car);
	if(car=='a' || car=='e' || car=='i' || car=='o' || car=='u' ||car=='A' || car=='E' || car=='I'|| car=='O' || car=='U'){
		printf("It is a vowel");
	}
	else{
		printf("It is a consonant");
	}
	return 0;
	}
	

