#include <stdio.h>

int main()
{
    int n,sum=0,sq;
    printf("");
    scanf("%d",&n);
    sq=n*n;
    
    while(sq>0)
    {
        sum=sum+sq%10;
        sq=sq/10;
    }
    
    if(sum==n)
    {
        printf("%d is neon no",n);
    }
    else
    {
        printf("%d is not neon no",n);
    }

    return 0;
}
