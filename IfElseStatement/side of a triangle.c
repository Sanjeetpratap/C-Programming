#include<stdio.h>
int main(){
    int a; 
    int b;
    int c;
    printf("Enter the first side:");
    scanf("%d",&a);
    printf("Enter the second side:");
    scanf("%d",&b);
    printf("Enter the third side");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("valid tringle");
    }
    else{
        printf("invalid tringle");
    }
    return 0;

}