#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the string1\n ");
	scanf("%s",a);
	int k=strlen(a);
	for(int i=0;i<(k+1)/2;i++){
		int temp=a[i];
		a[i]=a[k-i-1];
		a[k-i-1]=temp;
	}
	for(int i=0;i<k;i++){
		printf("%c",a[i]);
	}
}
