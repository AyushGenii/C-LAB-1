#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("Equal");
		
	}
	else{
		printf("NOT EQUAL");
	}
}
