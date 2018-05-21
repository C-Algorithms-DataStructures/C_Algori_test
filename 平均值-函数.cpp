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
/*
#include<stdio.h>
#include<conio.h>
float sum(float a[]);
float ave(float a[]);
main(){
	int i;
	float s,n,b[10];
	printf("ten number:");
	for(i=0;i<10;i++)
	scanf("%f",&b[i]);
    s=sum(b);
	n=ave(b);
	printf("sum=%.1f\n",s);
	printf("n=%.1f\n",n);
	getch();
}
float sum(float a[]){
	int i;
	float s=a[0];
	for(i=1;i<10;i++)
	s+=a[i];
    return s;
}
float ave(float a[]){
	float n;
		int i;
	float s=a[0];
	for(i=1;i<10;i++)
	s+=a[i];
	n=s/10;  
	return n;
}*/
