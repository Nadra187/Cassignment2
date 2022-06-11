//to find factorial using recursion
#include<stdio.h>

int factorial(int n){
    int fact;
    if(n==1){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}

int main(){
    int num;
    printf("Enter the number.\n");
    scanf("%d",&num);
    printf("Factorial= %d",factorial(num));
    return 0;
}