//to find power of number ussing recursion
#include<stdio.h>

int power(int n,int j){
    if(j!=0){
        return(n*power(n,j-1));
    }
    else{
        return 1;
    }
}

int main(){
    int num,i;
    printf("Enter the number and the power upto which the number to be raised.\t ");
    scanf("%d %d",&num,&i);
    printf("Answer= %d",power(num,i));
    return 0;
}