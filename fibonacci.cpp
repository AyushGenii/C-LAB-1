#include<stdio.h>
int main(){
	int a,b,c;
	c=0;
	b=1;
	int count=2;
	scanf("%d",&a);
	
	while(count<a){
		int temp=b;
		b=b+c;
		c=temp;
		count++;
	}
	printf("%d",b);
}
