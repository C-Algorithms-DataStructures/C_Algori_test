#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>//�������ͷ�ļ�
main(){
   int x,y,i;
   srand(time(0));//������Ӻ���srand(time(0))����һ���Ե�ǰ�ۼ���Ϊ���������������ʼֵ
  x=rand()/(32767/101)+1;
  printf("%d\n",x);//����[a,b]�������rand()/(32767/(b-a+1)+1)+a,
 //x=rand()%100+1;����[a,b]�������rand()%(b-a+1)+a;���ײ�����λ�ظ�
   for(i=0;i<10;i++){
	   printf("����һ��1--100���������");
       scanf("%d",&y);
	   if(x!=y){printf("���ź����´��ˡ�\n");}
	   else{printf("Bingo!");break;}
       if(y>x)printf("too big\n");
	   if(y<x)printf("too small\n");
	   continue;	   
   }
   if(i==10){printf("��ȷ�𰸣�%d\n",x);}
   getch();
}