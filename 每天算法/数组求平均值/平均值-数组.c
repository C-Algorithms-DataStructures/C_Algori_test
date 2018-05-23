#include<stdio.h>
#include<conio.h>
main(){
	int  grade[7][5],i,j,n=0;
	printf("please input 15 numbers:");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%d",&grade[i][j]);n++;}}
	for(i=0;i<7;i++){grade[i][3]=0;grade[i][4]=0;}
	for(j=0;j<4;j++){grade[5][j]=0;grade[6][j]=0;}
    for(i=0;i<7;i++){
		for(j=0;j<5;j++){
          grade[i][3]+=grade[i][j];
   grade[i][4]=(float)grade[i][3]/3;
    	  grade[5][j]+=grade[i][j];
  grade[6][j]=(float)grade[5][j]/5;
	}}
	for(i=0;i<7;i++){
		for(j=0;j<5;j++){			
			printf("grade[%d][%d]=%3d\t",i,j,grade[i][j]);
		}printf("\n");
	}
	for(i=0;i<6;i++){printf("\n第%d名学生的平均成绩:%d\n",i+1,grade[i][4]);}
	for(j=0;j<3;j++){printf("\n课程%d的平均成绩:%d\n",j+1,grade[6][j]);}
	getch();
	}