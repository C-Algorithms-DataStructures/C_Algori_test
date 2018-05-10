#include <iostream>
#include<stdio.h>
int main() {
	int d,m,n;
	long s;
	printf("«Î ‰»În:");
	scanf("%d",&n);
	s=0;
	for(m=1; m<=n; m++) {
		if(m%2>0)
			s=s+m;
		else {
			d=m;
			while(d%2==0)
				d=d/2;
			s=s-d;
		}
	}
	printf("s(%d)=%ld\n",n,s);
}
