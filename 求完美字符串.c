#include <stdio.h>
int IfNotEqu(int a[9])
{
int i,j;
for(i=0; i<=8; i++)
{
for(j=0; j<=8; j++)
{
if((a[i] == a[j]) && (i != j))
return 0;
}
}
return 1; 

}
void main()
{
int i[9];//存放9个整数
for(i[0]=1; i[0]<=9; i[0]++)
{
for(i[1]=1; i[1]<=9; i[1]++)
{
for(i[2]=1; i[2]<=9; i[2]++)
{
for(i[3]=1; i[3]<=9; i[3]++)
{
for(i[4]=1; i[4]<=9; i[4]++)
{
for(i[5]=1; i[5]<=9; i[5]++)
{
for(i[6]=1; i[6]<=9; i[6]++)
{
for(i[7]=1; i[7]<=9; i[7]++)
{
for(i[8]=1; i[8]<=9; i[8]++)
{
if((i[0]*1000+i[1]*100+i[2]*10+i[3])*i[4] == i[5]*1000+i[6]*100+i[7]*10+i[8] 
&& IfNotEqu(i)//该函数验证i[0]到i[9]是不是两两不相等，是，函数返回1；否，返回0
)
printf("(%d%d%d%d)*%d = %d%d%d%d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7], i[8]);
}
}
}
}
}
}
}
}
}
}