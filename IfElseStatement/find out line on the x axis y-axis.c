#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin");
    }
    else if(x==0){
        printf("lies on y-axis");

    }
    else{
        printf("lies on x-axis:");
    }
    return 0;
}