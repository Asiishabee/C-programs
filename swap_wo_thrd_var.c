#include <stdio.h>

int main()
{
    int x,y,temp;
    printf("",x,y);
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping x=%d y=%d",x,y);
    return 0;
}
