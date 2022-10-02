#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter 4 integers (A,B,C,D) separated by spaces: ");
    scanf("%d %d %d %d" , &a, &b, &c, &d);

    printf("*** Initial Values ***\n");
    printf("A = %d\nB = %d\nC = %d\nD = %d\n\n" , a,b,c,d);

    printf("*** Calculated Values ***\n");
    printf("The sum of B + C = %d\n" , b+c);
    printf("The product of A and D = %d\n" , a*d);
    printf("The integer quotient of A divided by C = %d\n" , a/c);
    printf("The integer remainder of C divided by D = %d\n" , c%d);
    printf("The product of A and C divided by the quantity sum of B and D = %d\n" , (a*c) / (b+d));

    return 0;
}