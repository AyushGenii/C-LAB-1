#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f;
printf("Principal in Rupees= ");
scanf("%f",&a);

printf("\nRate in %%= ");
scanf("%f",&b);

printf("\nTime in year= ");
scanf("%f",&c);
d=a*b*c/100;
printf("\nSimple Interest = %f",d);

e=pow(1+b/100,c);
f=a*e;
printf("\nCompound Interest= %f",f);
return 0;
}
