#include <stdio.h>

void getString(char * str);
int getLength(char * str);
void reverseString(char * str);

int main()
{
    printf("Welcome to Lab 9\n");
    char str[511];
    getString(str);
    printf("You entered: %s\n" , str);
    reverseString(str);
    printf("The modified string is: %s\n" , str);
    printf("Thanks for doing Lab 9 :(");

    return 0;
}

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

void reverseString(char * str){
    int length = getLength(str);
    char *bPtr, *ePtr, *b2Ptr, *e2Ptr, temp, temp2;
   bPtr = str;
   ePtr = str;
   b2Ptr = str;
   e2Ptr = str;

     for(int i = 1; i < length/2; i++){ 
        ePtr++;
    }
    for(int i = 1; i < length; i++){
        e2Ptr++;
    }

    if(length % 2 == 0) //aditya
    {
    for(int i = 1; i < (length/2)+1; i++){
        b2Ptr++;
    }

    for(int i = 1; i <= length/4; i++){
        temp = *ePtr; 
        *ePtr = *bPtr;
        *bPtr = temp;

        temp2 = *e2Ptr; 
        *e2Ptr = *b2Ptr;
        *b2Ptr = temp2;
        //moves pointers towards center
        bPtr++;
        ePtr--;
        b2Ptr++;
        e2Ptr--;
    }
    }
    else
    {
    for(int i = 1; i < (length/2)+2; i++){
        b2Ptr++;       
    }

    for(int i = 1; i <= length/4; i++){
        temp = *ePtr; 
        *ePtr = *bPtr;
        *bPtr = temp;

        temp2 = *e2Ptr; 
        *e2Ptr = *b2Ptr;
        *b2Ptr = temp2;
        //moves pointers towards center
        bPtr++;
        ePtr--;
        b2Ptr++;
        e2Ptr--;
    }
    }
    
}