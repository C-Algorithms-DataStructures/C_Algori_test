#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,x;
	int found=0;
		printf("�����뼦�����ӵ�����");
	scanf("%d",&a);
	    printf("������ŵ�����");
	scanf("%d",&b);
	for(x=0;x<=a;x++){		
				if(4*x+2*(a-x)==b){found=1;break;}		
	}
	if(found==1){
		printf("�õ�����:%d,��������:%d\n",x,a-x);}
	else{printf("error\n");}
	
	return 0;}
