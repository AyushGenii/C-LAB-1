#include<stdio.h>
#include<string.h>
int main(){
	char a[100],ch;
	int arg=0;
	printf("enter the string1\n ");
	scanf("%s",a);
	printf("enter the character \n ");
	scanf("%c",&ch);
	int k=strlen(a);
	for(int i=0;i<k;i++){
		if(a[i]==ch){
			printf("%c occurs firstly at %dth index ",ch,i);
			arg=1;
			break;
		}
	}
	if(arg==0){
		printf("There is no character present");
	}
}
