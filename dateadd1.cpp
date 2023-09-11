#include<stdio.h>
int main(){
int d,m,y;
printf("Day= ");
scanf("%d",&d);

printf("\nMonth= ");
scanf("%d",&m);

printf("\nYear= ");
scanf("%d",&y);

printf("\nDate entered= %d/ %d/ %d\n",d,m,y);

if(d>31  || m>12 ){
printf("Invalid input");
}

if(m==2 && (y%4==0 && (y%100!=0 || y%400==0)) && d>29){
printf("Invalid input");
}
else if(d==29 && m==2){
printf("1/3/%d",y+1);

}
else if(m==2 && y%4!=0  && d>28){
printf("Invalid input");
}
else if(m==2 &&d==28){
printf("1/3/%d",y+1);
}

else if(m==1 || m==3 || m==5 || m==7 || m==8 ||m==10 || m==12 && d>31  ){
printf("Invalid input");
}
else if(m==1 || m==3 || m==5 || m==7 || m==8 ||m==10  && d==31){
printf("1/%d/%d",m+1,y+1);
}

 else if( m==4 || m==6 || m==9 || m==11 && d>30 ){
printf("Invalid input");
}
else if(m==4 || m==6 || m==9 || m==11 && d==30){
printf("1/%d/%d",m+1,y+1);
}
return 0;
}
