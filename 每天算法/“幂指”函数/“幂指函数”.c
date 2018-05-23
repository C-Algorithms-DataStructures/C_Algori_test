#include<stdio.h>
#include<conio.h>
float mizhi(int x,int n){
    int i,j,t1,t2;
	float T=0;
	for(i=1,t1=1,t2=1,T=0;i<=n;i++){
		t2*=i;//n的阶乘
		printf("\nt2=%d\n",t2);
		t1=x*t1;//x的n次方
		printf("\nt1=%d\n",t1);
		T+=1.0*t1/t2;
	}
	return T;
}
main(){
	int x,n;
	float T;
   printf("\nplease input variate: X=");
   scanf("%d",&x);
   printf("\nplease input the end number: n=");
   scanf("%d",&n);
   T=mizhi(x,n);
   printf("\nT=%lg\n",T);

}
