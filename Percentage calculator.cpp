#include<stdio.h>
int main(){
int a,b,c,d,e,f;

printf("Calculating percentage\n");

printf("PHYSICS  ");
scanf("%d",&a);

printf("\nCHEMISTRY  ");
scanf("%d",&b);

printf("\nMATHS  ");
scanf("%d",&c);

printf("\nHINDI  ");
scanf("%d",&d);

printf("\nENGLISH  ");
scanf("%d",&e);



f=(a+b+c+d+e)/5;

printf("\nTHE PERCENTAGE IS  ");
printf("%d",f);


return 0;

}
