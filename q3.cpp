#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	
	printf("enter the string1\n ");
	scanf("%s",a);
	printf("enter the string2 ");
	scanf("%s",b); 
	int k=strlen(a);
	int l=strlen(b);
	for(int i=0;i<l;i++){
		a[k+i]=b[i];
	}
	for(int i=0;i<k+l;i++){
		printf("%c",a[i]);
	}
}
