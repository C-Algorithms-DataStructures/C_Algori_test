
#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char password[1][20];
	int i;
	printf("intput password:");
	gets(password[0]);
	for(i=0;i<(int)strlen(password[0]);i++){
        if(password[0][i]>'a'&&password[0][i]<'z'){password[1][i]=(int)password[0][i]-4;}
		else if(password[0][i]>'A'&&password[0][i]<'Z'){password[1][i]=(int)password[0][i]+3;}
	else	 password[1][i]=password[0][i];
	}
	puts(password[1]);
}