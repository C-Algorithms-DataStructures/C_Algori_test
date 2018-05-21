#include<stdio.h>
#include<conio.h>
float sum1(float a[]){
	int i;
	float sum=a[0];
	for(i=1;i<10;i++)
	     sum+=a[i];
	return sum;
}
float average1(float sum){ 
   float average;
	average= sum/10;
	return average;
}
void main(){
	float score[10],average,sum;
	int i;
	printf("please input 10 number:");
	for(i=0;i<10;i++){scanf("%f",&score[i]);}
	sum=sum1(score);
	average=average1(sum);	
	printf("sum=%.2f,average=%.2f\n",sum,average);
	getch();
}

