#include<stdio.h>
#include<conio.h>
main(){
	int grade[30],a,max,min,t,i,j,c=0,num=0;
    printf("input 30 students :");
	for(a=0;a<30;a++){	
		scanf("%d",&grade[a]);
		for(i=0;i<c-1;i++){
		for(j=i+1;j<c;j++){
			if(grade[i]<grade[j]){
				t=grade[j];grade[j]=grade[i];grade[i]=t;				
			}
		}
	}//排序
		if(grade[a]<0)break; 
		c++;
	}
	printf("\nc=%d\n",c);
printf("big-->small is:");
	for(t=0;t<c;t++){		
		printf("%4d",grade[t]);
		}
	max=grade[0];min=grade[c-1];
	printf("\nmax=%d,min=%d\n",max,min);
	for(t=0;t<c;t++){if((int)grade[t]<60) 
	{printf("%4d",grade[t]);num++;}}
	printf("\nNot past test number has:%d\n",num);
}
