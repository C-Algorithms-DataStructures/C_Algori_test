#include<stdio.h>
#include<conio.h>
char zifu(char x[],int n){
	int i,word=0,number=0,space=0,other=0;
	for(i=0;i<n;i++){
		if(x[i]>='a'&&x[i]<='z'||x[i]<='Z'&&x[i]>='A'){word++;}
		else if(x[i]>='1'&&x[i]<='9'){number++;}
		else if(x[i]==' '){space++;}
        else other++;
	}	printf("word=%d number=%d space=%d other=%d\n",word,number,space,other);
return other;	
}
void  main(){
	int i,n,word,number,space,other;
	char a[30];
    for(i=0;i<3;i++){
		if(a[i]!='\0'){
			scanf("%c",&a[i]);n++;}
		else break;
	}
	other=zifu(a,n);
	printf("word=%d number=%d space=%d other=%d\n",word,number,space,other);
}
