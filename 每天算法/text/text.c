#include<stdio.h>
#include<string.h>
#include<conio.h>
main (){
    
    char *begin; 
    char *end;
	char temp;
     char *reverse_str(char *str) ; 
    if(NULL==*str) //字符串为空直接返回  
    {  
        return *str;  
    }  
  
    begin =  str;  
    end =str; 
    while(*end != '\0') //end指向字符串的末尾  
    {  
        end++;  
    }  
    --end;  
  
      
    while(begin < end) //交换两个字符  
    {  
        temp = *begin;  
        *begin = *end;  
        *end = temp;  
        begin++;  
        end--;  
    }  
  
    return *str; //返回结果  

}