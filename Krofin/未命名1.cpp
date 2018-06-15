#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int a,i,b;
	srand(time(0));
	a=rand()%101;
	for (i=1;i<=10;i){
		printf("请输入1-100之间的一个数：");
	    scanf("%d",&b);
	    if(b<=100){		
	    if(a<b)
		printf("小一点\n");	
	    else if(b>a){		
		printf("大一点\n");
	}
	    else if(a==b)
		{
		printf("恭喜你答对了");break;
	}		 
		else printf("error");
	    i++;
	    continue;
	}
}
	printf("正确的答案是:%d",a);
	getch();
	return 0;
}
