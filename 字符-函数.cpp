#include<stdio.h>
#include<conio.h>
#include<string.h>
char zifu(char x[],int n,int *word,int *number,int *space,int *other){
	int i,w=0,nu=0,s=0,o=0;
	for(i=0;i<n;i++){
		if(x[i]>='a'&&x[i]<='z'||x[i]<='Z'&&x[i]>='A'){w++;}
		else if(x[i]>='1'&&x[i]<='9'){nu++;}
		else if(x[i]==' '){s++;}
        else o++;
	}
	*word=w;*number=nu;*space=s;*other=o;
//	printf("word=%d number=%d space=%d other=%d\n",word,number,space,other);
//	printf("ÄãºÃ£¬hello word!\n");
return *other;	
}
void  main(){
	int n=0,word,number,space,other;
	char a[30];
/*    for(i=0;i<10;i++){
		if(a[i]!='\0'){
			scanf("%c",&a[i]);n++;}
		else break;
	}*/gets(a);
	n=strlen(a);
//	printf("n=%d\n",n);
	other=zifu(a,n,&word,&number,&space,&other);
	printf("word=%d number=%d space=%d other=%d\n",word,number,space,other);
}
