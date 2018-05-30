#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main(){
	int i,j,a[100],t[100],p;
     srand(time(0));//产生一个以当前累计秒为参数的随机序列起始值
     for(i=0;i<100;i++){
		 a[i]=rand()%101;//产生一个【a，b】之间的随机数，rand%（b-a+1）+a
	 }
	 for(i=0;i<100;i++){printf("%-2d  ",a[i]);if((i+1)%4==0)printf("\n");}//每4个数字为一行
	 printf("\n");
	 for(i=0;i<100;i++){
		 t[i]=0;
		 for(j=0;j<100;j++){		
			 if(a[i]==a[j+1]) {t[i]++;}
			 else continue;
		 }
/*	  printf("a[%d]:t(%d)=%d次  ",i,i,t[i]);//输出每个软件的次数
        if((i+1)%4==0)printf("\n");//每4个数字为一行*/
	 }printf("\n");
	 //排序（大到小）
	 for(i=0;i<99;i++){int max;
	 for(j=i+1;j<100;j++){if(t[i]<t[j]){p=t[i];t[i]=t[j];t[j]=p;}}        
	 }
	 printf("\n前10名:\n");
     for(i=0;i<10;i++){printf("第%d名:%d次  ",i+1,t[i]);}
	 printf("\n最后10名:\n");
	 for(i=90;i<100;i++){printf("第%d名:%d次  ",i+1,t[i]);}
}