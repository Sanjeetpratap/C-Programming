#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("it is a three digit number");
    }
    else{
        printf("it is a not  three digit number");
    }
    return 0;
}