#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	
	printf("enter the string1\n ");
	scanf("%s",a);
	printf("enter the string2 ");
	scanf("%s",b);
	int k=strlen(a);
	for(int i=0;i<k;i++){
		b[i]=a[i];
	}
	for(int i=0;i<k;i++){
		printf("%c",b[i]);
	}
}
