#include<stdio.h>
#include<math.h>
int main(){
    int a = 1.99999;
    int b = 4*3/6*2;
    int x = 5*2 - 2*3;
    int y = 5*2/2*3;
    int z = 5+2/2*3;
    int w = 5*(2/2)*3;
    printf("For a: %d \n", a);
    printf("For b: %d \n", b);
    printf("For x: %d \n", x);
    printf("For y: %d \n", y);
    printf("For z: %d \n", z);
    printf("For w: %d \n", w);
    printf("%d \n", 4>3); //will show 1 as true
    printf("%d \n", 3>4); //will show 0 as false
    printf("%d \n", 4 == 4); //will show 1
    printf("AND operator: %d \n", 4>3 && 9>5);
    printf("OR operator: %d \n", 4>3 || 5>7);
    printf("NOT operator: %d \n", !((5>6) && (4>2)));
    return 0;
}  



