

#include<stdio.h>
#include<conio.h>
main(){
    double c,d,e,b,f;
	char yes,no,a;
	printf("�����븸�����(cm)��");
    scanf("%f",&c);
    printf("������ĸ�����(cm)��");
    scanf("%f",&d);
	printf("�������Լ����(cm)��");
    scanf("%f",&e);
	printf("�Ƿ�Ϊ����(yes or no)��");
	scanf("%s",&a);
    if(a==yes){
		b=(c+d)*1.08/2;}
	else
	   { b=(c*0.923+d)/2;}
	f=e-b;
	if(f<=3&&f>=-3)
		printf("���\n");
	else
        printf("�����\n");

return 0;
}
