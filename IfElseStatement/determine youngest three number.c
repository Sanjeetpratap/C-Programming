#include<stdio.h>
int main(){
    int ram;
    int shyam;
    int ajay;
    printf("Enter first age:");
    scanf("%d",&ram);
    printf("Enter second age:");
    scanf("%d",&shyam);
    printf("Enter third age:");
    scanf("%d",&ajay);
    if(ram>shyam){
        if(ram>ajay)
        printf("%d is greatest",ram);
        else
        printf("%d is grestest",ajay);
    }
    else{
        if(shyam>ajay)
        printf("%d is greatest",shyam);
        else
        printf("%d is greatest",ajay);
    }
    return 0;
}