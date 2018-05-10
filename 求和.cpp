#include <iostream>
#include <stdio.h>
int main()
{
    long n,i;
	double k=1,j=1;
	float sum=1,m;
    printf("ÇëÊäÈënµÄÖµ:\n"); 
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    	    m=1.0/(j+=1.0/i);
                   sum=sum-m*k;
                   k=-k;
    }
    printf("S(%d)=%lf",n,sum);

    return 0;
} 


