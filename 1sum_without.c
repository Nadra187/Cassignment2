//sum of digits without recursion

//Time compexity of main: O(1)
//Time compexity of sum func: O(no of digits of n)
//so time complexity of program: O(1+d) => O(d)

#include<stdio.h>

int sum(int n){
    int dig,s=0;
    while(n!=0){
        dig=n%10;
        s+=dig;
        n/=10;
    }
    return s;
}

int main(){
    int num;
    printf("Enter the number.\n");
    scanf("%d",&num);
    printf("Sum of digits = %d.",sum(num));
    return 0;
}