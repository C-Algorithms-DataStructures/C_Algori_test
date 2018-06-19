#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 10
int main (){
	int a[N],i,sum=0,avg=0;
	for(i=1;i<=10;i++){
		printf("please enter the score:");
		scanf("%d",&a[i]);
	}
	for(int i =1;i<=10;i++){
     sum+=a[i];
    }
    printf("SUM = %d ",sum);
    avg=sum/10;
	printf("avg = %d ",avg);    
}
