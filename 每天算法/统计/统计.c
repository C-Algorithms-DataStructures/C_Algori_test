#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main(){
	int i,j,a[100],t[100],p;
     srand(time(0));//����һ���Ե�ǰ�ۼ���Ϊ���������������ʼֵ
     for(i=0;i<100;i++){
		 a[i]=rand()%101;//����һ����a��b��֮����������rand%��b-a+1��+a
	 }
	 for(i=0;i<100;i++){printf("%-2d  ",a[i]);if((i+1)%4==0)printf("\n");}//ÿ4������Ϊһ��
	 printf("\n");
	 for(i=0;i<100;i++){
		 t[i]=0;
		 for(j=0;j<100;j++){		
			 if(a[i]==a[j+1]) {t[i]++;}
			 else continue;
		 }
/*	  printf("a[%d]:t(%d)=%d��  ",i,i,t[i]);//���ÿ������Ĵ���
        if((i+1)%4==0)printf("\n");//ÿ4������Ϊһ��*/
	 }printf("\n");
	 //���򣨴�С��
	 for(i=0;i<99;i++){int max;
	 for(j=i+1;j<100;j++){if(t[i]<t[j]){p=t[i];t[i]=t[j];t[j]=p;}}        
	 }
	 printf("\nǰ10��:\n");
     for(i=0;i<10;i++){printf("��%d��:%d��  ",i+1,t[i]);}
	 printf("\n���10��:\n");
	 for(i=90;i<100;i++){printf("��%d��:%d��  ",i+1,t[i]);}
}