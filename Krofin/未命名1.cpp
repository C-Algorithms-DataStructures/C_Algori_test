#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int a,i,b;
	srand(time(0));
	a=rand()%101;
	for (i=1;i<=10;i){
		printf("������1-100֮���һ������");
	    scanf("%d",&b);
	    if(b<=100){		
	    if(a<b)
		printf("Сһ��\n");	
	    else if(b>a){		
		printf("��һ��\n");
	}
	    else if(a==b)
		{
		printf("��ϲ������");break;
	}		 
		else printf("error");
	    i++;
	    continue;
	}
}
	printf("��ȷ�Ĵ���:%d",a);
	getch();
	return 0;
}
