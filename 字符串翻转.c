/*实现字符串翻转*/  
#include<stdio.h>

void main(){
char* reverse_str(char* str)  
{  
    if(NULL == str) //字符串为空直接返回  
    {  
        return str;  
    }  
    char *begin;  
    char *end;  
    begin = end = str;  
  
    while(*end != '\0') //end指向字符串的末尾  
    {  
        end++;  
    }  
    --end;  
  
    char temp;  
    while(begin < end) //交换两个字符  
    {  
        temp = *begin;  
        *begin = *end;  
        *end = temp;  
        begin++;  
        end--;  
    }  
  
    return str; //返回结果  
}  
}
