#include<stdio.h>
int main()
{
int a,b,c;
printf("a= ");
scanf("%d",&a);

printf("b= ");
scanf("%d",&b);

printf("c= ");
scanf("%d",&c);

if(a>b && a>c){
printf("a is greatest");
}
else if(b>a && a>c){
printf("b is greatest");
}
else if(a>b && c>a){
	printf("c is greatest");
}
return 0;
}
