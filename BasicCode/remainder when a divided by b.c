#include<stdio.h>
int main(){
    int a,b;//a>b
    printf("Enter dividend");
    scanf("%d",&a);
    printf("Enter divisor");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);//divisor*quotient+remainder=dividend
    printf("the remainder when %d is divided by %d is:%d",a,b,r);
    return 0;
}