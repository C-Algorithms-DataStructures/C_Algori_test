#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,x;
	int found=0;
		printf("����ͷ������");
	scanf("%d",&a);
	    printf("���ý�������");
	scanf("%d",&b);
	for(x=0;x<=a;x++){		
				if(4*x+2*(a-x)==b){found=1;break;}		
	}if(found==1){printf("������ȷ,��:%d,��:%d\n",x,a-x);}
	else{printf("�������\n");}
	
	return 0;}


	
