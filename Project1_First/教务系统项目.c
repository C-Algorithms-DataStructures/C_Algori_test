#include<stdio.h>
#include<conio.h>
#include<string.h>
//float sum[6];


// //查询 
// float sort(int stu_num,int n,struct student info[]){
// 	long int a;
// 	printf("输入学号：\n");
// 	scanf("%ld",&a);
// 	for(int i=0;i<stu_num;i++){
// 		if(a==info[i].id ){
// 		printf("name: %s\n",info[i].name);
// 		for(int i=0;i<stu_num;i++){
// 		for(int j=0;j<n){printf("The i+1 grade:%f\n",info[i].grade[j]);}
// 		}}
// 	}
// }
// //统计sta
// float sta(int stu_num,float info,grade[]){
// 	printf("the first grade statistics and different degree:"); 
// 	for(int i=0;i<stu_num;i++){
// 		if(info->grade<60&&info.grade>0)printf("Disqualification\n");//以grade首地址作为第一门成绩 
// 		if(info.grade<80)printf("pass the exam\n");
// 		if(info.grade<=100)printf("excellent\n");
// 	}
// } 
// //排序
// float rank(int stu_num,int n,float info[],grade[],float sum[]){
// 	float t;
// 	for(int i=0;i<stu_num-1;i++){
// 		for(int j=i+1;j<stu_num;j++){
// 			if(sum[i]<sum[j]){t=sum[i];sum[i]=sum[j];sum[j]=t;}
// 		}}
// 		for(int i=0;i<stu_num;i++){
// 		float aver;
// 	    aver=sum[i]/n;
// 		printf("sum=%f,aver=%f",sum[i],aver);
// 		printf("%ld\n",info[i].id);puts(info[i].name);
// 		for(int j=0;j<n;j++){printf("the %d grade:%f\n",j+1,info[i].grade[j]);}
// 		}
// } 

//--Krofin --认为代码不太规范，太混乱，希望你能改进
//这是我写的函数

int rank(int stu_num,int n,float info[],grade[],float sum[]) {





}



void main(){
	//学生成绩输入 
	int i,n,j,stu_num,t;
	printf("请问有几位学生：");
	scanf("%d",&stu_num);
    struct student{
		long int id;
		char name[30];
		int grade[6];
	}info;	
	for(i=0;i<stu_num;i++){
//	    sum[j]=0;
       	printf("第%d名学生学号：\n",j+1);
       	scanf("%ld",&info->id);
//       	getchar();
		printf("第%d名学生姓名：\n",j+1);
		gets(info->name);    
        printf("请问你有几门成绩：\n");
        scanf("%d",&grade_num);
		for(j=0;j<grade_num;j++){
			printf("第%d门成绩：\n",i+1);
			scanf("%d",&info->grade[i]);
			sum[j]+=info->grade[i];
		}
	}
	//功能菜单 
	printf("选择你需要的功能：1（排序），2（统计），3（查询）");
	scanf("%d",&t);
	switch(t){
	 case 1:rank(stu_num,n,info.grade,sum);
     case 2:sta(stu_num,info.grade);
	 case 3:sort(stu_num,n,id);
	 }

	 //把你的思路用伪代码写出来
	 /*
	 


	 
	  */
}