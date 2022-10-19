// Aditya Ramakrishnan
// AR4BW
// CS_1050
// Lab 7
// 10/14/22

#include <stdio.h>
#define COLS 3
#define ROWS 12
#define CROWS 4

void Print2DArray(int array[][COLS], int rows);
void PrintLetterGrades(int array[][COLS], int array2[][COLS], int rows);

int main()
{

    int studentGrades[ROWS][COLS] = {{72, 68, 62},{95, 88, 95},{93, 97, 86},{98, 77, 98},{99, 92, 90},{47, 32, 27},{97, 99, 75},{85, 95, 91},{96, 91, 99},{94, 90, 74},
    {98, 98, 90},{76, 82, 98}};

    int curve[CROWS][COLS] = {{85,90,90},{75,80,75},{60,70,55},{50,60,40}};

    printf("Here are the scores:");
    Print2DArray(studentGrades, ROWS);
    printf("\n\nHere are the grade cutoffs:");
    Print2DArray(curve, CROWS);
    printf("\n\nHere are the grades:");
    PrintLetterGrades(studentGrades, curve, ROWS);
    return 0;
}

void Print2DArray(int array[][COLS], int rows) {

    for(int i = 0; i < rows; i++){ //student counter
        printf("\nRow %d:" , i);
        for(int j = 0; j < COLS; j++){ //test counter
            printf(" %d " , array[i][j]);
        }
    }
}

void PrintLetterGrades(int array[][COLS], int array2[][COLS], int rows){
    
    for(int i = 0; i < rows; i++){ //student counter
        printf("\nStudent %d:" , i);
        for(int j = 0; j < COLS; j++){ //test counter
        if(j == 0){
            if(array[i][j]>=array2[0][0])
            printf(" A ");
            else if(array[i][j]>=array2[1][0])
            printf(" B ");
            else if(array[i][j]>=array2[2][0])
            printf(" C ");
            else if(array[i][j]>=array2[3][0])
            printf(" D ");
            else
            printf(" F ");
        }
        if(j == 1){
            if(array[i][j]>=array2[0][1])
            printf(" A ");
            else if(array[i][j]>=array2[1][1])
            printf(" B ");
            else if(array[i][j]>=array2[2][1])
            printf(" C ");
            else if(array[i][j]>=array2[3][1])
            printf(" D ");
            else
            printf(" F ");
        }
        if(j == 2){
            if(array[i][j]>=array2[0][2])
            printf(" A ");
            else if(array[i][j]>=array2[1][2])
            printf(" B ");
            else if(array[i][j]>=array2[2][2])
            printf(" C ");
            else if(array[i][j]>=array2[3][2])
            printf(" D ");
            else
            printf(" F ");
        }
        }
    }
}
