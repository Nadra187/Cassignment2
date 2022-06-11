//sum of digits with recursion
#include<stdio.h>

int sum(int n){
    int s;
    if(n!=0){
        return(sum(n/10)+(n%10));
    }
    else{
        return 0;
    }
    return s;
}

int main(){
    int num;
    printf("Enter a number.\n ");
    scanf("%d",&num);
    printf("Sum of five digits of the number= %d.",sum(num));
    return 0;
}
