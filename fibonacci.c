#include <stdio.h>

int main()
{
    int x,y,z,n,i;
    x=0;
    y=1;
    printf("",n);
    scanf("%d",&n);

    
    printf("",x,y);
    for(i=0;i<n;i++)
    {
    z=x+y;
    x=y;
    y=z;
    printf(" %d ",z);
    
    }
    
    return 0;
}
