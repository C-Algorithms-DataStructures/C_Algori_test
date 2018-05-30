#include <stdio.h>  
  
void DrinkWater()  
{  
    int m,t,x,y;  
    double money;  
    printf("请输入学生数\n");  
    scanf("%d",&m);  
  
    x = m / 20;                //分x个大组，每组买13瓶，借7瓶  
    t = m - 20*x;              //剩下大组外的7人  
    y = t / 3;                 //剩下的7人分成y个小组，每组买2瓶汽水，借1瓶  
    t = m - 20*x - 3*y;        //剩下大小组外的人，每人花1元喝1瓶  
    money = (13*x + 2*y)*1.40+t;//计算花的钱  
  
    printf("一共%d名学生，喝%d瓶汽水，至少需要：%.2f元。\n",m,m,money);  
}  
void main()  
{  
    DrinkWater();  
}  