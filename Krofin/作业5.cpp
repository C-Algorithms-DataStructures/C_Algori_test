#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,x;
	int found=0;
		printf("请输入鸡和兔子的总数");
	scanf("%d",&a);
	    printf("请输入脚的总数");
	scanf("%d",&b);
	for(x=0;x<=a;x++){		
				if(4*x+2*(a-x)==b){found=1;break;}		
	}
	if(found==1){
		printf("兔的数量:%d,鸡的数量:%d\n",x,a-x);}
	else{printf("error\n");}
	
	return 0;}
