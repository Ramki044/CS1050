/*****************************************************************************
* CMP_SC 1050
* FS 2022
* Lab 2
* By Aditya Ramakrishnan (ar4bw)
* September 2, 2022
*****************************************************************************/

#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Please input two numbers: ");
    scanf("%d %d" , &x,&y);

    printf("X = %d, Y = %d\n", x,y); //print values
    printf("X times Y = %d\n" , x*y); //multiply
    printf("X divided by Y = %d\n" , x/y); //divide
    printf("X plus 1 quantity times Y = %d\n" , (x+1) * y); //weird equation
    printf("X = %d, Y = %d\n", x,y);//shows values didnt change
    return 0;
}
