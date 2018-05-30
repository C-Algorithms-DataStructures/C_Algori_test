#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,x;
	int found=0;
		printf("鸡兔头总数：");
	scanf("%d",&a);
	    printf("鸡兔脚总数：");
	scanf("%d",&b);
	for(x=0;x<=a;x++){		
				if(4*x+2*(a-x)==b){found=1;break;}		
	}if(found==1){printf("输入正确,兔:%d,鸡:%d\n",x,a-x);}
	else{printf("输入错误\n");}
	
	return 0;}


	
