#include <stdio.h>
#define COLS 3
#define ROWS 12

void Print2DArray(int array[][COLS], int rows);
float PrintRowAverage(int array[][COLS], int whichrow);
float PrintColAverage(int array[][COLS], int whichcol);

int main()
{

    int studentGrades[ROWS][COLS] = {{72, 68, 62},{95, 88, 95},{93, 97, 86},{98, 77, 98},{99, 92, 90},{47, 32, 27},{97, 99, 85},{85, 95, 91},{96, 91, 99},{94, 90, 85},
    {98, 98, 90},{76, 82, 98}};

    Print2DArray(studentGrades, ROWS);
    printf("\n\nHere are the row averages:\n");

    for(int i = 0; i < ROWS; i++){
        printf("Average of row %d = %f\n" , i, PrintRowAverage(studentGrades, i+1));
    }

    printf("\nHere are the column averages:\n");

    for(int i = 0; i< COLS; i++){
        printf("Average of column %d = %f\n" , i, PrintColAverage(studentGrades, i+1));
    }

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

float PrintRowAverage(int array[][COLS], int whichrow){

    float total,avg;
        for(int j = 0; j < COLS; j++){ //test counter
            total += array[whichrow-1][j];
        }
    avg = total/3;
        //printf("Total: %f\n" , avg); this was just for testing
    return avg;
}

float PrintColAverage(int array[][COLS], int whichcol){
    float total,avg;
        for(int i = 0; i < ROWS; i++){ //test counter
            total += array[i][whichcol-1];
        }
    avg = total/12;
    //printf("Total: %f\n" , avg); this was just for testing
    return avg;
}
