#include<stdio.h>
void main(){
	int a,b,c,i,j,k,m,t,s,s1,s2,x,x1,x2,max,min,p[100];
	max=i=j=0;min=100;p[0]=0;
    for (a=1;a<=9;a++)
    	for (b=1;b<=9;b++)
    		for (c=1;c<=9;c++)
    {
    	if(a==b || b==c || c==a )
    	continue;
    s=a+b+c;x=a*100+b*10+c;
    if(x%s==0)
    {
        
    	i++;m=x/s;
    	if(m>max)
    	{
    		max=m;x2=x;s2=s;
    	}
    	if(m<min)
    	{
    		min=m;x1=x;s1=s;
    	}
    	for (t=0,k=0;k<=j;k++)
    	{
    		if(m==p[k])
    			{t=1;break;}
    		if(t==0)
    			{j++;p[j]=m;}
    	}
    }
    }
    printf("三位倍和数共%d个，不用倍数m共%d个\n",i,j);
    printf("倍数m最大为%d，对应倍和数：",max);
    printf("%d=%dx%d \n",x2,max,s2);
    printf("倍数m最小为%d，对应倍和数：",min);
    printf("%d=%dx%d \n",x1,min,s1);

	}