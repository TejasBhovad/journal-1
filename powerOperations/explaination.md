<!-- Use CTRL+K+V if you are in VS code -->

## Question [4]

WAP to Compute <br>
i) square root of number <br>
ii) Square of number<br>
iii) Cube of number <br>
iv) check for prime<br>
v) factorial of number <br>
vi) prime factors of given number using switch<br>

## Algorithm

1. Start the program
2. Accept the choice
3. Perform operations respectively
4. print the result
5. End the program

## Code

```c
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
```

## Output

![Output](/src/output/power.png)

<!-- 
Note: if you are using text-editor to view this document I highly recommend you to use vs code or sublime text so its easier to read the contents of the file
VS Code - https://code.visualstudio.com/download
Sublime Text - https://www.sublimetext.com/download 
--!>
