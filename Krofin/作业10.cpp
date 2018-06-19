#include<stdio.h>
#include<conio.h>
main(){
    int space,num,word,other;
	char c;
	printf("ÊäÈë×Ö·ûÐÐ£º");
	space=num=word=other=0;
while((c=getchar())!='\n'){
		if(c==' '){space++;}
		else if(c>=48&&c<=57){num++;}
		else if(c>=65&&c<=90||c>=97&&c<=122){word++;}
		else{other++;}
	}
	printf("space=%d,num=%d,word=%d,other=%d\n",space,num,word,other);
}
