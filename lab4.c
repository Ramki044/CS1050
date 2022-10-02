// Aditya Ramakrishnan
// ar4bw
// CS_1050
// Lab 4
// 9/16/22

#include <stdio.h>
int main()
{
    for (int i = 1; i < 100; i++)
    {
        switch (i/10) //tens
        {
        case 2:
            printf("twenty ");
            break;

        case 3:
            printf("thirty ");
            break;

        case 4:
            printf("fourty ");
            break;

        case 5:
            printf("fifty ");
            break;

        case 6:
            printf("sixty ");
            break;

        case 7:
            printf("seventy ");
            break;

        case 8:
            printf("eighty ");
            break;

        case 9:
            printf("ninety ");
            break;
        }

        switch (i%10) //ones and teens
        {
        case 0:
            printf( "%s", i==10 ? "ten, " : ", ");
            break;
        case 1:
            printf( "%s", i>10 && i<20 ? "eleven, " : "one, ");
            break;

        case 2:
            printf( "%s", i>10 && i<20 ? "twelve, " : "two, ");
            break;

        case 3:
            printf( "%s", i>10 && i<20 ? "thirteen, " : "three, ");
            break;

        case 4:
            printf( "%s", i>10 && i<20 ? "fourteen, " : "four, ");
            break;

        case 5:
            printf( "%s", i>10 && i<20 ? "fiveteen, " : "five, ");
            break;

        case 6:
            printf( "%s", i>10 && i<20 ? "sixteen, " : "six, ");
            break;

        case 7:
            printf( "%s", i>10 && i<20 ? "seventeen, " : "seven, ");
            break;

        case 8:
            printf( "%s", i>10 && i<20 ? "eighteen, " : "eight, ");
            break;

        case 9:
            printf( "%s", i>10 && i<20 ? "nineteen, " : "nine, ");
            break;
        }
    }
    return 0;
}
