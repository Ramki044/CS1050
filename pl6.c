#include <stdio.h>

int main()
{
    int array[20] = {};
    int sum = 0;
    for(int i = 0; i < 20; i++){
        array[i] = i+1;
        sum += array[i];
        printf("array[%d] = %d\n" , i , i+1);
    }
    printf("Total of all elements = %d\n" , sum);
    printf("Average = %.2f\n" , (float)sum/20);
    
    return 0;
}