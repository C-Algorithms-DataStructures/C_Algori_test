#include<stdio.h>
#include<conio.h>
//float sum,avr;
float sum1(float a[]){
	int i;
	float sum=a[0];
	for(i=1;i<10;i++)
	     sum+=a[i];
	return sum;
}
float avr1(float sum1()){
   float avr;
	avr=sum/5;
	return avr;
}
void main(){
	float soc[10],avr,sum;
	int i;
	printf("please input 10 number:");
	for(i=0;i<10;i++){scanf("%d",&soc[i]);}
	sum=sum1(soc);
	avr=avr1(sum);
	printf("sum=%.2f,avr=%.2f\n",sum,avr);
	getch();
}
