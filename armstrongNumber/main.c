#include <stdio.h>
#include <math.h>
int main()
{
    int n, tmp, rem, sum = 0, length = 3;
    // length of number can be changed
    printf("Enter a Number: ");
    scanf("%d", &n);
    tmp = n;
    while (tmp > 0)
    {
        rem = tmp % 10;
        sum = sum + (pow(rem, length));
        tmp = tmp / 10;
    }
    if (sum == n)
    {
        printf("%d is an Armstrong Number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong Number\n", n);
    }
    printf("\n");
    return 0;
}