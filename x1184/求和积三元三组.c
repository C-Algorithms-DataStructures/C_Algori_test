#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d,e,f,g,h,i,j,x,n;
   long t;
   printf("请输入整数n:");
   scanf("%d",&n);
   x=0;
   for(a=1;a<=(n-3)/3;a++)        /*设置枚举循环*/
    for(b=a+1;b<=(n-a-1)/2;b++)
     for(d=a+1;d<=(n-3)/3;d++)
      for(e=d+1;e<=(n-d-1)/2;e++)
       for(g=d+1;g<=(n-3)/3;g++)
        for(h=g+1;h<=(n-g-1)/2;h++)
        {
           c=n-a-b;               /*确保3组和等于n*/
           f=n-d-e;
           i=n-g-h;
           t=a*b*c;
           if(d*e*f==t && g*h*i==t)    /*排除积不相等*/
           { 
              x++;                     /*统计并输出解*/
              printf("%d: %3d %3d %3d; ",x,a,b,c);
              printf("%3d %3d %3d; ",d,e,f);
              printf("%3d %3d %3d; (%ld)\n",g,h,i,t);
           }
        }
        if(x>0)
           printf("共以上%d组解！\n",x);
        else
           printf("无解！\n");
     }