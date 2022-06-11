//sum of first 25 natural numbers using recursion
#include<stdio.h>

int sum(int n){
    if(n!=0){
        return(n+sum(n-1));
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter the number upto which you want the sum.\t ");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers = %d.",num,sum(num));
    return 0;
}