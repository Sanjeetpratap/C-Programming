#include<stdio.h>
int main()
{
    int x=12;
    int y=5;
    int z=8;
    int r=0;
    printf("%d\n",x+y+z+r);
    printf("%d\n",-x-y-z-r);
    printf("%d\n",x*y*z*r);
    printf("%d\n",x*y-r+z);
    printf("%d\n",x-y+z*r);
    return 0;
}