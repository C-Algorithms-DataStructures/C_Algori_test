#include<stdio.h>
#include<conio.h>
main(){
int a=0,t;
/*for(a=0;a<=26;a++){
	t=8*a-5*(26-a);
		if(t==0){printf("a=%d\n",a);}}*/
do{
	a++;
//	t=8*a-5*(26-a);
}while(8*a-5*(26-a)!=0);
printf("a=%d\n",a);
}//a=10
