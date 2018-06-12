
#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,flag;
	printf("input a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		flag=1;
		if(i==0||i==1) continue;
		else{
			for(j=2;j<=i-1;j++){
				if(i%j==0){flag=0;}
			}
			if(flag==1)printf("\n质数:%3d\n",i);
		}

	}
}
