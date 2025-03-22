#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        printf("it is a divisible by 5 or 3");
    }
    else {
        printf("it is a not divisible by 5 or 3");
    }
    return 0;

}