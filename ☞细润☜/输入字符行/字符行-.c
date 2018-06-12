//输入字符行中，空格个数，数字个数，英文字母个数,其他个数
#include<stdio.h>
#include<conio.h>
main(){
    int space,num,word,other;
	char c;
	printf("输入字符行：");
	space=num=word=other=0;
while((c=getchar())!='\n'){
		if(c==' '){space++;}
		else if(c>=48&&c<=57){num++;}
		else if(c>=65&&c<=90||c>=97&&c<=122){word++;}
		else{other++;}
	}
	printf("space=%d,num=%d,word=%d,other=%d\n",space,num,word,other);
}