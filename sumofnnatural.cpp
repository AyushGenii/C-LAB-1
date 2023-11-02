#include<stdio.h>;
int main()
{
	int a,n,sum;
	a=1;
	sum=0;
	scanf("%d",&n);

	
	while(a<=n)
	{
		sum+=a;
		a++;
	}
	printf("%d",sum);
	
}
