#include<stdio.h>
int main()
{
	int n,i,j,m;
	m=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
	return 0;
}
