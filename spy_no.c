#include <stdio.h>

int main()
{
    int n,sum=0,prod=1,x;
    printf("");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        prod=prod*x;
        n=n/10;
    }
    if(sum==prod)
    {
        printf("it is spy no");
    }
    else
    {
        printf("it is not spy no");
    }

    return 0;
}
