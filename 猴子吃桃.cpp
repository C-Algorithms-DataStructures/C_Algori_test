#include <stdio.h>
int main(){ 
    int day, x1, x2; 
    day; 
    x2=1; 
    for(day=1;day<=9;day++) {
    	x1=(x2+1)*2;
    	x2=x1;
	}
    printf("��һ���� %d������\n",x1);
    
    return 0;
}
