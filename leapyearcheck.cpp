#include<stdio.h>
int main()
{
int a;
printf("write year= ");
scanf("%d",&a);
if(a%400==0){
	printf("It is a leap year");
}
else if(a%100==0)
{
printf("It is not a leap year");
}	
else if(a%4==0)
{
	printf("It is  leap year");
}
else{
	printf("It is not a leap year");
}
}
