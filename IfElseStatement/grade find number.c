#include<stdio.h>
int main(){
    int n;
    printf("Enter the percentage:");
    scanf("%d",&n);
    if(n>80){
        printf("A grade\n");
    }
    else{
        if(n>40){
            printf("C grade\n");
        }
        else{
            printf("D grade\n");
        }
    }
    return 0;
}