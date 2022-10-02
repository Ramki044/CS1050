#include <stdio.h>
#include <math.h>

double approxe();
int factorial(int n);

int main() {
 
 for(int i = 1; i <= 5; i++){ //prints e to the 1-5th power
    printf("e to the %d power = %.3lf\n" , i , pow(approxe() , i));
 }
  return 0;
}

int factorial(int n) { //factorial function
  int ans = 1;
  for(int i = 2; i<=n; i++) {
    ans = ans*i;
    }
  return ans;
}

double approxe() //approximating e function
{
double e = 0;
  for(int i=0; i < 10; i++) {
    e += 1.0/factorial(i);
  }
  return e;
}

//float 2.356456
//double 6.439948394839
//long is an int but higher range of values