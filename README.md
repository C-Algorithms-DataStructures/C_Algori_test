# C_Algori_test
---
仅为c语言及相关的算法及数据结构练习用项目  
目前处于维护阶段
欢迎*star*项目，*commit* 及 *issue* 

    /*递归颠倒字串算法*/
    #include <stdio.h>
    void Reverse();
    int main()
    {
    printf("Enter a sentence: ");
    Reverse();
    return 0;
    }
    void Reverse()
    {
    char c;
    scanf("%c",&c);
    if( c != '\n')
    {
        Reverse();
        printf("%c",c);
    }
    }
    

 


