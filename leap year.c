#include <stdio.h>
#include<string.h>

int main()
{
    int year;
    printf("",year);
    scanf("%d",&year);
    if(year%400==0)
    printf("leap year",year);
    else if(year%100==0)
    printf("no leap year");
    else if(year%4==0)
    printf("leap year");
    else
    printf("no leap year");
    
    return 0;
}
