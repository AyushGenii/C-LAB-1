#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int t;
	printf("enter the string1\n ");
	scanf("%s",a);
	int k=strlen(a);
	for(int i=0;i<k;i++){
		if(a[i]>=97&&a[i]<=122){
			t=a[i];
			t=t-32;
			a[i]=t;
		}
	}
	for(int i=0;i<k;i++){
		printf("%c",a[i]);
	}
}
