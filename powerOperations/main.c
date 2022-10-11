#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    int choice;
    int flagPrime = 0, factorial = 1;
    printf("Enter your choice:");
    printf("\n1. Square root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Find factorial");
    printf("\n6. Find Prime factors\n");
    scanf("%d", &choice);
    printf("\nEnter Number: ");
    scanf("%f", &n);

    switch (choice)
    {
    case 1:
        printf("\nSquare Root: %f", sqrt(n));
        break;
    case 2:
        printf("\nSquare: %f", n * n);
        break;
    case 3:
        printf("\nCube: %f", n * n * n);
        break;
    case 4:
        // Checking if prime
        for (int i = 1; i <= n; i++)
        {
            if ((int)n % i == 0)
            {
                flagPrime++;
            }
        }
        if (flagPrime == 2)
        {
            printf("\nNumber is Prime");
        }
        else
        {
            printf("\nNumber is not Prime");
        }
        break;
    case 5:
        // Finding factorial
        for (int j = 1; j <= n; j++)
        {
            factorial = factorial * j;
        }
        printf("\nFactorial: %d", factorial);
        break;
    case 6:
        // Finding all Prime factors
        printf("\nPrime Factors: ");
        while ((int)n % 2 == 0)
        {
            printf("%d ", 2);
            n = n / 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while ((int)n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
            }
        }
        if (n > 2)
        {
            printf("%d", (int)n);
        }
        printf("\n");
        break;
    default:
        printf("\nWrong choice!!");
        break;
    }
    printf("\n");

    return 0;
}
// LOGIC:
// 1. Prime Number:
// - A loop is run from 1 to n and its checked if n is completly divisible by i
// - for prime numbers only 1 and number itself divide the number completely
// - therefore if flagPrime(no of numbers that divide n) are greater than 2 number isnt prime
// 2. Prime factors:
// - first n is divided by 2 as many times as possible
// - then a loop is run from 3 which is incremented by 2(as n cant be even) till root of n
// - if n is completely divisible by i its printed and divided
// - finally if n at end of the loop is greater than 2, then its printed