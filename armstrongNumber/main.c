#include <stdio.h>
#include <math.h>
int main()
{
    int n, tmp_1, tmp_2, rem, sum = 0, length = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    // temporary variables assigned to value of given number
    tmp_1 = n;
    tmp_2 = n;
    // Finding number of digits in given number
    while (tmp_2 > 0)
    {
        length++;
        tmp_2 = tmp_2 / 10;
    }
    // checking if number is armstrong number
    while (tmp_1 > 0)
    {
        rem = tmp_1 % 10;
        sum = sum + (pow(rem, length));
        tmp_1 = tmp_1 / 10;
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