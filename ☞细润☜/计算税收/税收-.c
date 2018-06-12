#include<stdio.h>
#include<conio.h>
main(){
	int a,t;
    float b;
	printf("收入：");
	scanf("%d",&a);
	if(a<=3500)
		printf("税额为：0\n");
	else 	b=a-3500;
	//printf("%d\n",b);
	t=1*(b<1500)+2*(b>=1500&&b<4500)+3*(b>=4500&&b<9000)+4*(b>=9000&&b<35000)+5*(b>=35000&&b<55000)+6*(b>=55000&&b<80000)+7*(b>=80000)+8*(b<=0);
    switch(t){
    	case 1:printf("税额为：%lg\n",b*0.03);break;
		case 2:printf("税额为：%lg\n",b*0.1-105);break;
		case 3:printf("税额为：%lg\n",b*0.2-555);break;
		case 4:printf("税额为：%lg\n",b*0.25-1005);break;
		case 5:printf("税额为：%lg\n",b*0.3-2755);break;
		case 6:printf("税额为：%lg\n",b*0.35-5505);break;
		case 7:printf("税额为：%lg\n",b*0.45-13505);break;
        case 8:break;
	}

return 0;}