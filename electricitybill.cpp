#include<stdio.h>
int main()
{
int a,b,c,d;
printf("NUMBER OF UNITS= ");
scanf("%d",&a);
b=5;
c=100;
printf("Chargeper unit=Rs.%d ",b);
printf("Surcharge=Rs.%d ",c);
  

d=a*b+c;
printf("\nYour bill is %d",d);
return 0;
}
