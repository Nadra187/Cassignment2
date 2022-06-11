//to reverse a user input string using recurssion
#include<stdio.h>

int l;
void reverse(char s[],int i,int j){
    int temp;
    if(i>=l/2){
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        i--;
        j++;
        return(reverse(s,i,j));
    }
    else{
        return;
    }
}

int main(){
    char str[100],ch;
    l=0;
    printf("Enter the string.\n");
    do{
        ch=getchar();
        str[l]=ch;
        l++;
    }while(ch!='\n');
    l=l-1;
    str[l]='\0';
    reverse(str,l-1,0);
    printf("Reversed String is %s",str);
    //puri array to return krne se rhe
    //usi array ko change krdega as array name stores the address of the first element 
    //and we are passing that address
    return 0;
}