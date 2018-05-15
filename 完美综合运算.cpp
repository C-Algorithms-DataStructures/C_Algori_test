#include <iostream>
#include <math.h>
int main()
{  
    int arr[9] = {0};
    for (arr[0]=1; arr[0]<=9; ++arr[0]) 
    for (arr[1]=1; arr[1]<=9; ++arr[1]) 
    for (arr[2]=1; arr[2]<=9; ++arr[2]) 
    for (arr[3]=1; arr[3]<=9; ++arr[3]) 
    for (arr[4]=1; arr[4]<=9; ++arr[4]) 
    for (arr[5]=1; arr[5]<=9; ++arr[5]) 
    for (arr[6]=1; arr[6]<=9; ++arr[6]) 
    for (arr[7]=1; arr[7]<=9; ++arr[7]) 
    for (arr[8]=1; arr[8]<=9; ++arr[8]) 
    {
        bool flag = false;
        for (int i=0; i<8 && !flag; ++i)
        {
            for (int j=i+1; j<9; ++j)
            {
                if (arr[i] == arr[j])
                {
                    flag = true;
                    break;
                }

            }
        }

        if (flag)
            continue; 
        int tmp = pow(arr[0], arr[1]); 
        int tmp1 = arr[2] * 10 + arr[3];
        int tmp2 = arr[4] * 10 + arr[5];
        int tmp3 = (arr[6] * 10 + arr[7]) * arr[8]; 

        if (tmp1 == (tmp3-tmp)*tmp2)
        {
            for (int i=0; i<9; ++i)
            {
               printf("%d",arr[i]); 
               if(i%9==8) 
			   printf("\n"); 
            }
            
        }

    }

    return 0;
}
