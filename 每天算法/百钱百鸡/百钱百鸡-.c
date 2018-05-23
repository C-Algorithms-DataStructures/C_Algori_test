#include<stdio.h>
#include<conio.h>
main(){
   int x,y,z,t,m=0;//次数
   for(x=0;x<=20;x++){
	   for(y=0;y<=50;y++){
		   for(z=0;z<=100;z++){
   t=z+2*y+5*x;
   if(t==100) m++;}}}
 //  printf("x=%d,y=%d,z=%d\n",x,y,z);
   printf("m=%d\n",m);
   
}//结果：541