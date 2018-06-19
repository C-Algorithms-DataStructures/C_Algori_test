#include<stdio.h>
#include<conio.h>
#include<string.h>
    struct student{
		char name[30];
		int id;
		float grade[6];
	}infor[6];
//void rank (int stu_num,float sum[] );
//void sort(int stu_num,int grade_num);
//void sta(int grade_num,int stu_num);
void main(){
	float sum[10];
	int stu_num,i,j,grade_num,t;
	printf("有几位学生：");
	scanf("%d",&stu_num);
	for(i=0;i<stu_num;i++){
		printf("第%d位学生的姓名：",i+1);
		scanf("%s",infor[i].name);		
		printf("第%d位学生的ID：",i+1);
		scanf("%d",&infor[i].id);
		printf("有几门成绩：");
		scanf("%d",&grade_num);
		for(j=0;j<grade_num;j++){
			printf("第%d门成绩：",j+1);
			scanf("%f",&infor[i].grade[j]);
			sum[i]+=infor[i].grade[j];
		}
//	printf("\n%lg\n",sum[i]);	
	}
	//功能菜单 
	printf("1（排序），2（查询），3（统计）\n");
	printf("选择你需要的功能：");
	scanf("%d",&t);
	switch(t){
	 case 1:rank(stu_num,sum);
     case 2:sort(stu_num,grade_num);
	 case 3:sta(grade_num,stu_num);
	 }
	}
//排序 (以总成绩做个排名)
void rank (int stu_num,float sum[] ){
	int i,j,t;
	 struct student T;
	for(i=0;i<stu_num-1;i++){
		for(j=i+1;j<stu_num;j++){
			if(sum[i]<sum[j]){
				T=infor[i];infor[i]=infor[j];infor[j]=T;
			}
		}
	}
	for(i=0;i<stu_num;i++){
		printf("第%d名",i+1);
		printf("姓名：%s\t学号：%d\t总成绩：%lg\n",infor[i].name,infor[i].id,sum[i]);
	}
}
//查询(根据学号查询)
void sort(int stu_num,int grade_num){
	int t,i,j;
	printf("请输入你要查询的学号：");
	scanf("%d",&t);
	for(i=0;i<stu_num;i++){
		if(t==infor[i].id){
			printf("姓名：%s\t学号：%d\n",infor[i].name,infor[i].id);
			for(j=0;j<grade_num;j++){
				printf("%16lg\n",infor[i].grade[j]);
			}break;
		}
		else printf("输入错误！"); 
	}
	 
}
//统计
void sta(int grade_num,int stu_num){
	int i,j;
	for(i=0;i<grade_num;i++){
		int bad=0,good=0,nice=0;
		for(j=0;j<stu_num;j++){
			if(infor[j].grade[i]<60&&infor[j].grade[i]>0) bad++;
			if(infor[j].grade[i]<80&&infor[j].grade[i]>=60) good++;
			if(infor[j].grade[i]<=100&&infor[j].grade[i]>=80) nice++;			
		}
		printf("第%d门成绩：优秀%d人,及格%d人,不及格%d人\n",i+1,nice,good,bad);
	}
	
}
