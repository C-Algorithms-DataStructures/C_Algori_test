#include<stdio.h>
int main()
{
   int g,i,k,s,a[10];
   long m1,m2,m3;
   //设数据依次为a1.a2.a3.a4.a5.a6.a7.a8.a9
   printf("所求算式\n");
   i=1;
   a[1]=1;
   s=0;
   while(1)
   {
      g=1;
      for(k=i-1;k>=1;k--)
         if(a[i]==a[k])
         {
            g=0;           /*两数相同,标记g=0*/
            break;
         }
      if(i==9 && g==1 && a[1]<a[4] && a[3]!= 1 && a[6]!=1 && a[9]!=1 )
      {
         m1=a[1]*10+a[2];
         m2=a[4]*10+a[5];
         m3=a[7]*10+a[8];
         if(m1*a[6]*a[9]+a[3]*a[9]*m2==a[3]*a[6]*m3)
         {
            s++;
            printf("(%2d)",s);
            printf("%d/%d+%d/",m1,a[3],m2);
            printf("%ld=%d/%ld  ",a[6],m3,a[9]);
            if(s%2==0)
               printf("\n");
         }
      }
      if(i<9 && g==1)
      {
         i++;
         a[i]=1;
         continue;          /*不到9个数,往后继续*/
      }
      while(a[i]==9 && i>1)
         i--;               /*往前回溯*/
      if(a[i]==9 && i==1)
         break;
      else
         a[i]++;            /*至第1个数为9结束*/
   }
   printf("共以上%d个解\n",s);
}