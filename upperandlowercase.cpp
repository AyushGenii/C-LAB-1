#include<stdio.h>;
int main(){
	char ayush;
	printf("Enter the character ");
	scanf("%c",&ayush);
	if(ayush>=65 && ayush<=90){
		printf("It is upper case");
	}
	else if(ayush>=97 && ayush<=122){
		printf("Lower case");
	}
	
}

