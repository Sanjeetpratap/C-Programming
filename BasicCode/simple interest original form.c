#include<stdio.h>
int main()
{
    float principal,rate,time,si;
    printf("Enter principale:");
    scanf("%f",&principal);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    printf("your simple interest is:%f",si);
    return 0;
}