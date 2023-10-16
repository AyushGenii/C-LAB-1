#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("write m,n");
	scanf(" %d %d",&n,&m);
	int a[n][m],b[n][m],c[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("1st Matrix is %d",a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("2nd matrix is %d",b[i][j]);
		}
	}
	c[i][j]=a[i][j]+b[i][j];
	printf("The sum of the two matrices is %d",c[i][j]);
}
