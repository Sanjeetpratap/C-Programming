#include<stdio.h>
int main(){
    int l;
    printf("Enter lenth:");
    scanf("%d",&l);
    int b;
    printf("Enter breadth:");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    if(a>p){
        printf("area is less thsn perimeter");
    }
    if(a==p){
        printf("area is equal to perimeter");
    }
    return 0;
}