/*ʵ���ַ�����ת*/  
#include<stdio.h>

void main(){
char* reverse_str(char* str)  
{  
    {  
        return str;  
    }  
    char *begin;  
    char *end;  
    begin = end = str;  
  
    while(*end != '\0') //endָ���ַ�����ĩβ  
    {  
        end++;  
    }  
    --end;  
  
    char temp;  
    while(begin < end) //���������ַ�  
    {  
        temp = *begin;  
        *begin = *end;  
        *end = temp;  
        begin++;  
        end--;  
    }  
  
    return str; //���ؽ��  
}  
}
