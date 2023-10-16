#include<stdio.h>
int main()
{
	
	int i,n,j,k;
	 j=1;
	 k=1;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=1;i<n;i++)
	{
		if((a[j])>=(a[i+1]))
		{
			;
		}
		else{
		j++;	
		}
	}
	printf("\nmaximum is %d ",a[j]);
		for(i=1;i<n;i++)
	{
		if(a[k]<a[i+1])
		{
			;
		}
		else{
		k++;	
		}
	}
	printf("\nminimum is %d ",a[k]);
}
