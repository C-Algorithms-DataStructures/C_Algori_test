

#include<stdio.h>
#include<conio.h>
int main(){
    double c,d,e,b,f;
	char yes,no,a;
	printf("ÇëÊäÈë¸¸Ç×Éí¸ß(cm)£º");
    scanf("%f",&c);
    printf("ÇëÊäÈëÄ¸Ç×Éí¸ß(cm)£º");
    scanf("%f",&d);
	printf("ÇëÊäÈë×Ô¼ºÉí¸ß(cm)£º");
    scanf("%f",&e);
	printf("ÊÇ·ñÎªÄÐÉú(yes or no)£º");
	scanf("%s",&a);
    if(a==yes){
		b=(c+d)*1.08/2;}
	else
	   { b=(c*0.923+d)/2;}
	f=e-b;
	if(f<=3&&f>=-3)
		printf("Ïà·û\n");
	else
        printf("²»Ïà·û\n");

return 0;
}
