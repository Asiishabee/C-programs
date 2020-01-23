#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
       printf("the num is prime num") ;
    }
    else
    {
       printf("the num is not prime num");
    }
    
    return 0;
}
    
