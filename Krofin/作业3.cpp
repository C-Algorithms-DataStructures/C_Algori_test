#include<stdio.h>
#include<conio.h>
int main (){
	int a;
	float b,c,d,e;
	printf("您是男生还是女生（男生=1，女生=0）：");
	scanf("%d",&a);
	if(a==1){
		printf("请输入您父亲的身高:\n");
		scanf("%f",&b);
		printf("请输入您母亲的身高:\n");
		scanf("%f",&c);
		d=(b+c)*1.08/2;
	}
	else if(a==0){
		printf("请输入您父亲的身高:\n");
		scanf("%f",&b);
		printf("请输入您母亲的身高:\n");
		scanf("%f",&c);
		d=(b*0.923)+b/2;
	}
	else{
		printf("error");
		return 0;
	}
	printf("您的身高为：%f",d);
	printf("您的真实身高为：");
	scanf("%f",&e);
// printf("%f\n%f\n\n",d,e);     //--记录 年轻时垃圾的自己 
//	if(d<123){
//	printf("O");}
//	scanf("%f",&e);
	
	if(e-d<=3.0&&e-d>=-3.0) //此时进行判断 |d-e|<=3 d-e<=3 && d-e>=-3 
		printf("Result correct");  
	
	else printf("Result incorrect"); 
	getchar();	
	return 0;
}
