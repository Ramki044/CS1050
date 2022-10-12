// Aditya Ramakrishnan
// AR4BW
// CS_1050
// Lab 6
// 10/7/22

#include <stdio.h>

int main(){

    int array1[99];
    int even,odd;
    printf("Array1 elements: \n");
    for(int i = 0; i < 99; i+=2) //increments i by two so array1 is only initialized to odd numbers
    {
        array1[i] = i+1;
        printf("array1[%d] = %d, " , i/2, array1[i]);
        if((i/2)%2 == 0) //if the index of the array is even (using modulus) then add that value to a total variable for array values with an even index
        even += array1[i];
        if((i/2)%2 == 1) //if the index of the array is odd (using modulus) then add that value to a total variable for array values with an odd index
        odd+=array1[i];
    }
    printf("\nTotal of array1 even elements = %d, average = %.2f\n" , even , (float)even/25); //prints total, and divides total by 25 to get average and typecasted it to get decimals
    printf("Total of array1 odd elements = %d, average = %.2f\n" , odd ,(float)odd/25); //prints total, and divides total by 25 to get average and typecasted it to get decimals

    return 0;
}