#include<stdio.h>
int main()
{
	int n,i,j,space;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		for(j=1;j<=i+1;j++)
		{
			printf("*");
		}
		for(space=0;space<2*n-2*i-2;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
		for(i=0;i<n;i++)
	{
	
		for(j=1;j<=n-i;j++)
		{
			printf("*");
		}
		for(space=0;space<2*i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
