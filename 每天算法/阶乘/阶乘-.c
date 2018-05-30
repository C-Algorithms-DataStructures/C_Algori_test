#include<stdio.h>
#include<conio.h>
void main(){
  int x[5][4],i,j;
  printf("intput 12 numbers:");
  for(i=0;i<4;i++)
	  for(j=0;j<3;j++)
		  scanf("%d",&x[i][j]);
  for(i=0;i<3;i++)
	  x[4][i]=0;
  for(j=0;j<5;j++)
	  x[j][3]=0;
  for(i=0;i<4;i++)
	  for(j=0;j<3;j++){
		  x[i][3]+=x[i][j];
	      x[4][j]+=x[i][j];
		  x[4][3]+=x[i][j];
	  }
	  for(i=0;i<5;i++){
		  for(j=0;j<4;j++)
			  printf("%d\t",x[i][j]);
		  printf("\n");}
getch();
}