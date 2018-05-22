
#include<stdio.h>
#include<conio.h>
float sum(float a[]);
float ave(float a[]);
main(){
	int i;
	float s,a,b[10];
	printf("ten number:");
	for(i=0;i<10;i++)
	scanf("%d",&b[i]);
    s=sum(b);
	a=ave(b);
	printf("sum=%f\n",s);
	printf("ave=%f\n",a);
	getch();
}
float sum(float a[]){
	int i;
	float s=a[0];
	for(i=0;i<10;i++)
	s+=a[i];
    return s;
}
float ave(float a[]){
	int i;
	float a=a[0];
    for(i=0;i<10;i++)
	a=a+a[i];
	a=a/10;  
	return a;
}
    
