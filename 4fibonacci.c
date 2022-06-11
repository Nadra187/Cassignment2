//to find fibonacci series upto a given number by using recursion
#include<stdio.h>

int fibonacci(int n){
    int fab;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }    
    else{
        return(fibonacci(n-1)+fibonacci(n-2));
    }                                                                                       
}                                                                    
int main(){
    int num;
    printf("Enter the count upto which the fibonacci elements should be displayed.\n");
    scanf("%d",&num);
    for(int i=0;i<=(num-1);i++){
        if(i<(num-1)){
            printf("%d, ",fibonacci(i));
        }
        else{
            printf("%d. ",fibonacci(i));
        }
        
    }
    return 0;
}