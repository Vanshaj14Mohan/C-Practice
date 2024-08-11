#include<stdio.h>
int main(){
    int l, w; //taking variables
    printf("Enter the length:");
    scanf("%d", &l); // storing value in l
    printf("Enter the width:");
    scanf("%d", &w); //storing value in w.
    printf("Perimeter of rectangle is: %d", (l+w)/2);
    return 0;
}