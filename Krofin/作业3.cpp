#include<stdio.h>
#include<conio.h>
int main (){
	int a;
	float b,c,d,e;
	printf("������������Ů��������=1��Ů��=0����");
	scanf("%d",&a);
	if(a==1){
		printf("�����������׵����:\n");
		scanf("%f",&b);
		printf("��������ĸ�׵����:\n");
		scanf("%f",&c);
		d=(b+c)*1.08/2;
	}
	else if(a==0){
		printf("�����������׵����:\n");
		scanf("%f",&b);
		printf("��������ĸ�׵����:\n");
		scanf("%f",&c);
		d=(b*0.923)+b/2;
	}
	else{
		printf("error");
		return 0;
	}
	printf("�������Ϊ��%f",d);
	printf("������ʵ���Ϊ��");
	scanf("%f",&e);
// printf("%f\n%f\n\n",d,e);     //--��¼ ����ʱ�������Լ� 
//	if(d<123){
//	printf("O");}
//	scanf("%f",&e);
	
	if(e-d<=3.0&&e-d>=-3.0) //��ʱ�����ж� |d-e|<=3 d-e<=3 && d-e>=-3 
		printf("Result correct");  
	
	else printf("Result incorrect"); 
	getchar();	
	return 0;
}
