#include<stdio.h>

int main(){
	char string[100];
	int length=0;
	printf("enter the string ");
	scanf("%s",string);
	while (string[length] != '\0'){
		length++;
	}
	printf("%d",length);
}
