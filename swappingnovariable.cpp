#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers\n a=  ");
scanf("%d",&a);

printf("\n b=  ");
scanf("%d",&b);


a=a+b;
b=a-b;
a=a-b;
printf("After swapping a=%d,b=%d",a,b);
  

return 0;
}
