#include<stdio.h>
int main()
{
	int n,i,j,space;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(space=0;space<i;space++)
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
