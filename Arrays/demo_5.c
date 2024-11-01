#include<stdio.h>
int main(){
    int marks[5];
    //for input 
    int *ptr = &marks[0];
    for(int i =0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", &marks[i]); //or (ptr+i)
    }

    //for output
    for(int i =0; i<5; i++){
        printf("%d index = %d\n", i, marks[i]); // or *(ptr+i)
    }
    return 0;
}