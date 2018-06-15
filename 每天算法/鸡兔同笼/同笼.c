#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,x;
	int found=0;
		printf("¼¦ÍÃÍ·×ÜÊý£º");
	scanf("%d",&a);
	    printf("¼¦ÍÃ½Å×ÜÊý£º");
	scanf("%d",&b);
	for(x=0;x<=a;x++){		
				if(4*x+2*(a-x)==b){found=1;break;}		
	}
	if(found==1){
		printf("ÊäÈëÕýÈ·,ÍÃ:%d,¼¦:%d\n",x,a-x);}
	else{printf("ÊäÈë´íÎó\n");}
	
	return 0;}


	
