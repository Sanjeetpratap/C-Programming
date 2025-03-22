#include<stdio.h>
int main(){
     int a;
     int b;
     int c;
     int d;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    printf("Enter the fouth number:");
    scanf("%d",&d);

    if(a>b && a>c &&a>d){
        printf(" %d greatest ",a);
    }
     else if(b>a && b>c && b>d){
        printf("%d is greatest",b);
    }
     else if (c>a && c>b && c>d){
        printf(" %d is greatest ", c);
    
    }
    else
    {
        printf("%d is greatest",d);
    }
    return 0;

}