// Aditya Ramakrishnan
// AR4BW
// CS_1050
// Lab 8
// 10/21/22

#include <stdio.h>

void GetIntArray(int * outputIntArray, int *count);
void PrintArray(int a[], int count);
int TotalArray(int * array, int count);
double AvgArray(int * array, int count);

int main(){

    int count;
    int array[100];

    GetIntArray(array, &count);
    PrintArray(array,count);
    printf("Total of the array = %d\n" , TotalArray(array, count));
    printf("Average of the array = %.3lf\n" , AvgArray(array, count));


    return 0;
}

void GetIntArray(int * outputArray, int *count){ //* outputIntArray is same as outputIntArray[] they are interchangeable

    printf("Enter the number of elements in your array:\n");
    scanf("%d" , count);

    for(int i = 0; i < *count; i++){
        printf("Enter element #%d: ", i);
        scanf("%d" , &outputArray[i]); //using & to change the value of array by reference
    }

}

void PrintArray(int a[], int count){
    printf("\nHere are the %d elements of your array:\n" , count);
    for(int i = 0; i < count; i++){
        printf("Element %d = %d\n" , i, a[i]);
    }
}
int TotalArray(int * array, int count){
    int total = 0;
    for(int i = 0; i < count; i++){
      total += array[i];
    }
    return total;
}
double AvgArray(int * array, int count){
    int total = 0;
    double avg = 0;

    for(int i = 0; i < count; i++){
      total += array[i];
    }
    avg = (double)total / count;
    return avg;

}




