#include <stdio.h>
int main(){ 
	//修复乱码问题
    int day, x1, x2; 
    day; 
    x2=1; 
    for(day=1;day<=9;day++) {
    	x1=(x2+1)*2;
    	x2=x1;
	}
    printf("第一天有 %d个桃子\n",x1);
    
    return 0;
}
