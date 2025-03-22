#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);
    if(sp>cp){
     printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("No profit, no loss");
    }
    return 0;
}