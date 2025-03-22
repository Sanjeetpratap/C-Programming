#include<stdio.h>
int main(){
    int ram;
    int shyam;
    int ajay;
    printf("Enter the ram  age:");
    scanf("%d",&ram);
    printf("Enter the shyam age:");
    scanf("%d",&shyam);
    printf("Enter the ajay age:");
    scanf("%d",&ajay);
    if(ram>shyam && ram>ajay){
        printf("%d year is youngest ram",ram);
    }
    if(shyam>ram && shyam>ajay){
        printf("%d is  year youngest shyam",shyam);
    }
    if(ajay>shyam && ajay>ram){
        printf("%d is  year youngest ajay",ajay);
    }
    return 0;
}