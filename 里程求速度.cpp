#include<stdio.h>
#include<conio.h>
main(){
	int i;
	float j;
	for(i=95860;i<100000;i++){
		if(i%10==i/10000){
			if((i%100)/10==(i/1000)%10){printf("next number:%d\n",i);break;}
			else continue;
		}
		else continue;
	}
	j=i;
	j=(j-95859)/2;
	printf("speed:%f\n",j);
	return 0;
}
