#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k;
	printf("������һ��������");
	scanf ("%d",&i);
	while(i){
		printf("%d",i%10);
		i/=10;
	}
	return 0;
}
