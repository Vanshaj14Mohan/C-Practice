#include<stdio.h>
int main(){
    int marks[5];

    //for input 
    int *ptr = &marks[0];
    for(int i =0; i<10; i++){
        printf("%d index: ", i);
        scnaf("%d", (ptr+i));
    }

    //for output
    for(int i =0; i<10; i++){
        printf("%d index = %d\n", i, *(ptr+i));
    }
    return 0;
}