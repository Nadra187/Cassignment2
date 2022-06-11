//to find largest array element in given array using recursion
#include<stdio.h>

int largest(int element[],int i,int l,int lar ){                                 
     if(i<l){
        if(lar<element[i]){
            lar=element[i];
        }
        i++;
        return(largest(element,i,l,lar));
    } 
    else{
        return lar;
    }
    
}               
int main(){
    int count;
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    printf("Enter the numbers.\t ");
    int num[count];
    for(int i=0;i<count;i++){
        scanf("%d",&num[i]);  
    }                                                                       
    printf("Largest number= %d",largest(num,1,count,num[0]));               
    return 0;
}
            