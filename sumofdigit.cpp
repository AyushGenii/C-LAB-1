#include<stdio.h>
int main(){
	int n,a,b;
	b=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		b+=a;
	}
	printf("%d",b);
}

