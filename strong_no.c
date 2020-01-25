#include <stdio.h>

int main()
{
    int i, x, num, y, sum;
    long fact;

    /* Input a number from user */
    printf(" ");
    scanf("%d", &num);

    /* Copy the value of num to a temporary variable */
    x = num;

    sum = 0;

    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get y of num */
        y = num % 10;

        /* Find factorial of y */
        fact = 1;
        for(i=1; i<=y; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        num = num / 10;
    }

    /* Check Strong number condition */
    if(sum == x)
    {
        printf("%d is STRONG NUMBER", x);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", x);
    }

    return 0;
}
