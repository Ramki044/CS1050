// Aditya Ramakrishnan
// AR4BW
// CS_1050
// Lab 5
// 9/30/22

#include <stdio.h>

int Summation(int n);
int main()
{
    Summation(10); //call the function for values up to 10
    return 0;
}

int Summation(int n){ //summation function

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (i*i);
        printf("Summation of 1 through %d squared = %d\n" , i , sum);
    }
    return sum;
}