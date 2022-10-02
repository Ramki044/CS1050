/*****************************************************************************
- CMP_SC 1050
- Lab 3
- By Aditya Ramakrishnan (ar4bw)
- September 9, 2022
*****************************************************************************/
#include <stdio.h>
int main(void)
{
    int count = 100;
    while(count>=2)
    {
        if(count%2 == 0)
        {
            if(count%21==0)
            printf("TS%d " , count);
            else if(count%3==0)
            printf("T%d ", count);
            else if(count%7 == 0)
            printf("S%d ", count);
            else
            printf("%d " , count);
        }
        count--;
    }
    return 0;
}