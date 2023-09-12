#include<stdio.h>
int main(){
	int d,m,y;
printf("Enter Date ");
scanf("%d%d%d",&d,&m,&y);
if(m>12 || d>31 ||m<1 || d<1){
	printf("Invalid input");
}
else if(m==2 && (y%4==0 && (y%100!=0 || y%400==0)) && d>29){
	printf("Invalid input");
}
else if(m==2 && (y%4==0 && (y%100!=0 || y%400==0)) && d<29 && d>0){
	printf("%d/%d/%d",d+1,m,y);
}
else if(m==2 && (y%4==0 && (y%100!=0 || y%400==0)) && d==29){
	printf("1/%d/%d",m+1,y);
}
else if(m==2 && y%4!=0 && d>28 ){
	printf("Invalid input");
}
else if(m==2 && y%4!=0 && d<28 && d>0 ){
	printf("%d/%d/%d",d+1,m,y);
}
else if(m==2 && y%4!=0 && d==28){
	printf("1/%d/%d",m+1,y);
}
else if((m==1 || m==3 || m==5|| m==7 || m==8 || m==10|| m==12) && d>31){
	printf("Invalid input");
}
else if((m==1 || m==3 || m==5|| m==7 || m==8 || m==10) && d<31 && d>0){
	printf("%d/%d/%d",d+1,m,y);
}
else if((m==1 || m==3 || m==5|| m==7 || m==8 || m==10) && d==31){
	printf("1/%d/%d",m+1,y);
}
else if((m==4 || m==6 || m==9|| m==11) && d>30){
	printf("Invalid input");
}
else if((m==4 || m==6 || m==9|| m==11) && d<30 && d>0){
	printf("%d/%d/%d",d+1,m,y);
}
else if((m==4 || m==6 || m==9|| m==11) && d==30){
	printf("1/%d/%d",m+1,y);
}
else if(m==12 && d>31){
	printf("Invalid input");
}
else if(m==12 && d<31 && d>0){
	printf("%d/%d/%d",d+1,m,y);
}
else if(m==12 && d==31){
	printf("1/1/%d",y+1);
}
return 0;
}
