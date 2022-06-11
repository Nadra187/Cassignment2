//find GCD of two numbers by using recursion
#include<stdio.h>

int num1,num2;
int gcd(int greatest){
    if((num1%greatest==0)&&(num2%greatest==0)){
        return greatest;
    }
    else{
        return(gcd(greatest-1));
    }
}

int main(){
    int divisor;
    printf("Enter the numbers.\t");
    scanf("%d %d",&num1,&num2);
    if(num1<num2){
        divisor=num1;
    }
    else{
        divisor=num2;
    }
    printf("GCD= %d",gcd(divisor));
    return 0;
}