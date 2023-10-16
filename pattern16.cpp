#include<stdio.h>
int main()
{
	int n,i,j,space;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(space=0;space<n-i-1;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=0;i<n-1;i++)
	{
		for(space=0;space<i+1;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*(n-1)-2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
