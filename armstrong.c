include <stdio.h>
int main() {
    int num, x, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    x = num;
    while (x!= 0) {
        rem =x % 10;
        result += rem * rem * rem;
        x /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
