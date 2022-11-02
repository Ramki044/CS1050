#include <stdio.h>

//function prototypes
void getString(char * str);
int getLength(char * str);
void reverseString(char *str);

int main()
{
    printf("Welcome to prelab 9 hoe\n");
    char str1[255];
    getString(str1);    
    printf("You entered: %s\n" , str1);
    printf("That string is %d in length.\n" , getLength(str1));
    reverseString(str1);
    printf("The reversed string is: %s\n" , str1);
    printf("That string is %d in length.\n" , getLength(str1));
    return 0;
}

//functions
void getString(char * str){
    printf("Please enter a string: ");
    scanf("%s" , str);
}
int getLength(char * str){
    int count = 0;
    for( ; *str != '\0'; str++){
        count++;
    }
    return count;
}
void reverseString(char *str){
    int length = getLength(str);
    char *bPtr, *ePtr, temp;
    bPtr = str; //sets bPtr to first element
    ePtr = str; //sets ePtr to first element

    for(int i = 1; i < length; i++){ //moves ePtr to last value
        ePtr++;
    }
    for(int i = 1; i <= length/2; i++){ //reverses string
    
        
        //swaps values
        temp = *ePtr; 
        *ePtr = *bPtr;
        *bPtr = temp;

        //moves pointers towards center
        bPtr++;
        ePtr--;
    }
}

