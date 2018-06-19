#include<stdio.h>
main (){
	float i,j,k;
	printf("请输入华氏温度：");
	scanf("%f",&i);
	j=5.0/9*(i-32) ;
	printf("所得到的摄氏温度是：%f",j);
	getchar();	 
	return 0;
}
