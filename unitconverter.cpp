#include<stdio.h>
int main()
{
float a,b,c,d;
printf("Unit Converter\n");

printf("KILOMETRE=" );
scanf("%f",&a);

b=a*1000;
printf("\nMetre= %f",b);
c=a*100000;
printf("\nCentimetre= %f",c);
d=a*1000000;
printf("\nMillimetre= %f",d);
return 0;

}
