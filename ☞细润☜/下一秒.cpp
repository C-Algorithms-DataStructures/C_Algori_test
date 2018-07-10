#include<stdio.h>
#include<conio.h>
main(){
	int t[3],i;
	printf("输入时、分、秒(24小时制)：");
	for(i=0;i<3;i++){
		scanf("%d",&t[i]);		
	}
	//判断时间是否正确
	if((t[2]<=59&&t[2]>=0)&&(t[1]<=59&&t[1]>=0)&&(t[0]<=23&&t[0]>=0)){
		printf("您当前输入的时间为 ");
		for(i=0;i<3;i++){
		  printf("%d",t[i]);
		  if(i<2) printf(":");
	    }
	    printf("\n"); 
	} 
	else printf("wrong time!");
	
	if(t[2]<59&&t[2]>=0){
		if(t[1]<=59&&t[1]>=0){
			if(t[0]<=23&&t[0]>=0){
				t[2]++;
			}
		}
		printf("下一秒的时间为 ");
		printf("%d:%d:%d\n",t[0],t[1],t[2]); 
	}
    if(t[2]==59){
	if(t[1]<59&&t[1]>=0){
		if(t[0]<=23&&t[0]>=0){
			t[2]=0;t[1]++;
		}
		printf("下一秒的时间为 ");
		printf("%d:%d:%d0\n",t[0],t[1],t[2]);
	}
	if(t[1]==59){
		if(t[0]<23&&t[0]>=0){
			t[2]=0;t[1]=0;t[0]++;
		}
		if(t[0]==23){
			t[2]=0;t[1]=0;t[0]=0;
		} 
		printf("下一秒的时间为 ");
		printf("%d0:%d0:%d0\n",t[0],t[1],t[2]);
	}	
	}
}
