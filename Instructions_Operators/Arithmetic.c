#include<stdio.h>
#include<math.h> //math.header file for maths related problems

//for checking power function
int main(){
  int b,c;
  printf("Enter b value");
  scanf("%d", &b);
  printf("Enter c value");
  scanf("%d", &c);
  int power = pow(b,c);
  printf("Power function: %d", power);
  return 0;
}