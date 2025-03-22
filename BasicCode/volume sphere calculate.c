#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius :");
    scanf("%f",&radius);
    float pi=3.14;
    float v=(4*pi*radius*radius *radius)/3;
    printf("volume of sphere:%f",v);
    return 0;


}