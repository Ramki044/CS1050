// Aditya Ramakrishnan
// AR4BW
// CS_1050
// Lab 10
// 11/11/22


/*
 * CS1050
 * Fall 2022
 * Lab 10 Starter File
 * by Jim Ries
 */

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
#define S2 "\t99 dreams I have had.  In every 1 a red balloon."
#define S3 "And you'll start cryin' 96 tears."
#define S4 "I demand the sum of.....$1,000,000.00!"
#define STRINGCOUNT 4

////////////////
// Prototypes //
////////////////
char * Filter(char *s);

// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4,
    };

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings after filtering ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,Filter(s[i]));
    }
}
char * Filter(char *s){
    int countS = 0;
    int countP = 0;

    for (int i = 0; s[i]; i++){
        if (!isspace(s[i]))
            s[countS++] = s[i];
    }
    s[countS] = '\0';

    for (int i = 0; s[i]; i++){
        if (!ispunct(s[i]))
            s[countP++] = s[i];
    }
    s[countP] = '\0';

    for (int i = 0; s[i]; i++){
        if(isalpha(s[i]))
        {
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else
                s[i] = tolower(s[i]);
        }
    }
    return s;
}
