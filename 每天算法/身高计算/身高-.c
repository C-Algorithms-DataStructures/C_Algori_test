

#include<stdio.h>
#include<conio.h>
main(){
    double c,d,e,b,f;
	char yes,no,a;
	printf("请输入父亲身高(cm)：");
    scanf("%f",&c);
    printf("请输入母亲身高(cm)：");
    scanf("%f",&d);
	printf("请输入自己身高(cm)：");
    scanf("%f",&e);
	printf("是否为男生(yes or no)：");
	scanf("%s",&a);
    if(a==yes){
		b=(c+d)*1.08/2;}
	else
	   { b=(c*0.923+d)/2;}
	f=e-b;
	if(f<=3&&f>=-3)
		printf("相符\n");
	else
        printf("不相符\n");

return 0;
}
