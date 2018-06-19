#include<stdio.h>
#include<conio.h>
int main (){
	int a[30],i,j,m,t;
	for(i=1;i<=30;i++){
		printf("please enter the score %d:",i);
		scanf("%d",&a[i]);
		if(a[i]<0){
		printf("Failed score is£º%d",a[i]);
		getch();
		return 0;}
    }
}
