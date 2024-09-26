//Write a function to calculate Percentage of a student for marks in Science, Maths and Sanskrit.
#include<stdio.h>

int perCounter(int Science, int Maths, int Sanskrit); 

int main(){
    int science = 92;
    int maths = 94;
    int sanskrit = 91;
    printf("Percentage is: %d", perCounter(science, maths,sanskrit)); //function calling
    return 0;
}

//Recursive function
int perCounter(int Science, int Maths, int Sanskrit){
    return ((Science + Maths + Sanskrit)/3);
}
