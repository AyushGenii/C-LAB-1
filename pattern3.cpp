#include<stdio.h>
int main()
{
	int n,i,j,space;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(space=0;space<n-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
