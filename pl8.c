#include <stdio.h>

void GetCount(int * outputInt);
void GetIntegerArray(int * outputIntArray, int count);
void PrintArray(int a[], int size);

int main(){

    int count;
    GetCount(&count);
    int array[count];
    GetIntegerArray(array, count);
    PrintArray(array, count);


    return 0;
}

void GetCount(int * outputInt){
printf("Enter how many integers you would like to enter:\n");
scanf("%d" , outputInt);
}

void GetIntegerArray(int * outputIntArray, int count){ //* outputIntArray is same as outputIntArray[] they are interchangeable
    for(int i = 0; i < count; i++){
        printf("Enter integer #%d: ", i+1);
        scanf("%d" , &outputIntArray[i]);
    }

}

void PrintArray(int a[], int size){
    printf("You entered an array with %d elements:\n" , size);
    for(int i = 0; i < size; i++){
        printf("array[%d] = %d\n" , i, a[i]);
    }
}



