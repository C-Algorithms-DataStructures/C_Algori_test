#include<stdio.h>
#include<string.h>
#include<conio.h>
main (){
    
    char *begin; 
    char *end;
	char temp;
     char *reverse_str(char *str) ; 
    if(NULL==*str) //�ַ���Ϊ��ֱ�ӷ���  
    {  
        return *str;  
    }  
  
    begin =  str;  
    end =str; 
    while(*end != '\0') //endָ���ַ�����ĩβ  
    {  
        end++;  
    }  
    --end;  
  
      
    while(begin < end) //���������ַ�  
    {  
        temp = *begin;  
        *begin = *end;  
        *end = temp;  
        begin++;  
        end--;  
    }  
  
    return *str; //���ؽ��  

}