<!-- Use CTRL+K+V if you are in VS code -->

## Question [6]

WAP to accept the number of terms a finds the sum of sine series

## Algorithm

1. Start the program
2. Accept N and X
3. Calculate sum of the series
4. End the program

## Code

```c
#include <stdio.h>
#include <math.h>
int main()
{
    int n, sign = 1;
    float x, sum, fact = 1;
    printf("Enter Sine Angle: ");
    scanf("%f", &x);
    printf("\n");
    printf("Enter Number of terms: ");
    scanf("%d", &n);
    printf("\n");
    int X = x;
    x = (x * 3.1415) / 180;
    int i = 1;
    // runs a loop until n number of terms are evaluated
    while (n-- > 0)
    {
        // finding factorial of selected element
        for (int k = 1; k <= i; k++)
        {
            fact = fact * k;
        }
        // actual sum of series
        sum = sum + (sign * (pow(x, i) / fact));
        // changing sign for alternate terms
        sign = sign * -1;
        // adding two to term
        i = i + 2;
        // resetting value of factorial
        fact = 1;
    }
    printf("sin(%d): %f\n", X, sum);
    return 0;
}
```

## Output

![Output](/src/output/sine.png)

<!-- 
Note: if you are using text-editor to view this document I highly recommend you to use vs code or sublime text so its easier to read the contents of the file
VS Code - https://code.visualstudio.com/download
Sublime Text - https://www.sublimetext.com/download 
--!>
