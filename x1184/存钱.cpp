#include<stdio.h>
#include<conio.h>
#define fetch 1000
#define rate 0.0171
main (){
  double month[49];
  int i;
  month[48]=(double)fetch;
  for(i=47;i>0;i--){
  	month[i]=(month[i+1]+fetch)/(1+rate/12);
  }
  for(i=48;i>0;i--){
  	printf("%d month money is:%.2lg\n",i,month[i]);
  }
  getch();
  return 0;
}
