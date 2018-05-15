#include<stdio.h>
#include<conio.h>
main(){
	int x,y,i;
	for(x=1;x<10;i++){
		for(y=0;y<10;y++){
			for(i=33;i<=100;i++){
				if(i*i==(1100*x+11*y)){printf("plate number:%d\n",1100*x+11*y);}
				else {continue;}
			}
		}
	}
}
