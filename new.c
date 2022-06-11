#include<stdio.h>

int main(){
    int num[3]={8};
    printf("Third number=%d \n",num[3]);
    char alpha[3]={'b'};
    printf("Third alphabet = %c \n",alpha[3]);
    int n=9;
    // char *j=n;
    // printf("%c",j);

                                                                                                                                                                                                                                            
    //as j is a pointer,so it stores address of n.
    //as mam have used it somewhere,but here its not printing
    return 0;
}
//as mam have told,when array is of int type ,then it stores 0 for empty spaces 
//and for char it stores null
//but here for int,it is howing garbage value and for char its not printing anything