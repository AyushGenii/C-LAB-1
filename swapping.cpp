#include<stdio.h>
int main(){
int a,b,c;
printf("Write a\n");
scanf("%d",a);
 
printf("write b");
scanf("%d",b);

c=a;
a=b;
b=c;
 
printf("\nAFTER swapping a= %d b=%d",a,b);
return 0;



}
