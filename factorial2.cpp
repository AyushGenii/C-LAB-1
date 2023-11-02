#include<stdio.h>;
int main()
{
	int a,n,fact;
	a=1;
	fact=1;
	scanf("%d",&n);

	
	while(a<=n)
	{
		fact*=a;
		a++;
	}
	printf("%d",fact);
	
}
