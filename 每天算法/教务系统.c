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
	printf("�м�λѧ����");
	scanf("%d",&stu_num);
	for(i=0;i<stu_num;i++){
		printf("��%dλѧ����������",i+1);
		scanf("%s",infor[i].name);		
		printf("��%dλѧ����ID��",i+1);
		scanf("%d",&infor[i].id);
		printf("�м��ųɼ���");
		scanf("%d",&grade_num);
		for(j=0;j<grade_num;j++){
			printf("��%d�ųɼ���",j+1);
			scanf("%f",&infor[i].grade[j]);
			sum[i]+=infor[i].grade[j];
		}
//	printf("\n%lg\n",sum[i]);	
	}
	//���ܲ˵� 
	printf("1�����򣩣�2����ѯ����3��ͳ�ƣ�\n");
	printf("ѡ������Ҫ�Ĺ��ܣ�");
	scanf("%d",&t);
	switch(t){
	 case 1:rank(stu_num,sum);
     case 2:sort(stu_num,grade_num);
	 case 3:sta(grade_num,stu_num);
	 }
	}
//���� (���ܳɼ���������)
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
		printf("��%d��",i+1);
		printf("������%s\tѧ�ţ�%d\t�ܳɼ���%lg\n",infor[i].name,infor[i].id,sum[i]);
	}
}
//��ѯ(����ѧ�Ų�ѯ)
void sort(int stu_num,int grade_num){
	int t,i,j;
	printf("��������Ҫ��ѯ��ѧ�ţ�");
	scanf("%d",&t);
	for(i=0;i<stu_num;i++){
		if(t==infor[i].id){
			printf("������%s\tѧ�ţ�%d\n",infor[i].name,infor[i].id);
			for(j=0;j<grade_num;j++){
				printf("%16lg\n",infor[i].grade[j]);
			}break;
		}
		else printf("�������"); 
	}
	 
}
//ͳ��
void sta(int grade_num,int stu_num){
	int i,j;
	for(i=0;i<grade_num;i++){
		int bad=0,good=0,nice=0;
		for(j=0;j<stu_num;j++){
			if(infor[j].grade[i]<60&&infor[j].grade[i]>0) bad++;
			if(infor[j].grade[i]<80&&infor[j].grade[i]>=60) good++;
			if(infor[j].grade[i]<=100&&infor[j].grade[i]>=80) nice++;			
		}
		printf("��%d�ųɼ�������%d��,����%d��,������%d��\n",i+1,nice,good,bad);
	}
	
}
