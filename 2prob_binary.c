//to convert from decimal to binary using recursion
#include<stdio.h>
#include<math.h>

int binary(int n){
    int converted;
    if(n!=1){
        converted=binary(n/2)*10+(n%2);
        return(converted);                    //jb conv mein store value return thodi hogi;
    }                                                      //ex-for 4,conv=10 honjane k baad return thodi hoga..becoz hmne return nhi daala.
    else{                                                  //problem in program wapas jb aega.
        return 1;                                          //yani hmein likhna chahiye na return converted.
    }
}

int main(){
    int num;
    printf("Enter a decimal number");
    scanf("%d",&num);
    printf("Given number  in binary number system= %d",binary(num));
    return 0;
}