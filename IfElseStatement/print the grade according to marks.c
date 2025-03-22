#include<stdio.h>
int main(){
    int n;
    printf("Enter percentage:");
    scanf("%d",&n);
    //more than 80->A
    // more than 60->B
    // more than 40-> c
    // less than 40->fail-D
    if(n>80){
        printf("A grade\n");
    }
    else if(n>60){
        printf("B grade\n");
    }
    else if(n>40){
        printf("c grade\n");
    }
    else{
        printf("D grade\n");
    }
    return 0;

}