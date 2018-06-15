#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>//随机数的头文件
main(){
   int x,y,i;
   srand(time(0));//随机种子函数srand(time(0))产生一个以当前累计秒为参数的随机序列起始值
  x=rand()/(32767/101)+1;
  printf("%d\n",x);//产生[a,b]随机数：rand()/(32767/(b-a+1)+1)+a,
 //x=rand()%100+1;产生[a,b]随机数：rand()%(b-a+1)+a;容易产生低位重复
   for(i=0;i<10;i++){
	   printf("输入一个1--100的随机数：");
       scanf("%d",&y);
	   if(x!=y){printf("很遗憾！猜错了。\n");}
	   else{printf("Bingo!");break;}
       if(y>x)printf("too big\n");
	   if(y<x)printf("too small\n");
	   continue;	   
   }
   if(i==10){printf("正确答案：%d\n",x);}
   getch();
}