#include<stdio.h>
int main(){
	int n,a,c;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		c=c * 10 + a;
	}
	printf("%d",c);
}

