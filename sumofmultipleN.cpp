#include<stdio.h>;
int main(){
	int a,sum=0,n;
	printf("Enter A NUMBER= ");
	scanf("%d",&n);
	for(a=1;a<=10;a++){
		sum +=(a*n);
	}
	printf("The sum of numbers of multiple of %d= %d",n,sum);
	return 0;
}
