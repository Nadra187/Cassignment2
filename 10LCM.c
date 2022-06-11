//to find LCM of two numbers using recursion
#include<stdio.h>

int num1,num2;
int lcm(int least){
    if((least%num1==0)&&(least%num2==0)){
        return least;
    }
    else{
        return(lcm (least+1));
    }
}

int main(){
    int multiple;
    printf("Enter the numbers.\t");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        multiple=num1;
    }
    else{
        multiple=num2;
    }
    printf("The LCM of two numbers= %d",lcm(multiple));
    return 0;
}