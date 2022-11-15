<!-- Use CTRL+K+V if you are in VS code -->

## Question [1]

WAP to accept basic salary from the keyboard. Calculate the gross salary that includes basic salary, 50% DA and 40% HRA

## Algorithm

1. Start the program
2. Accept basic salary
3. Add the allowances
4. print final salary.
5. End the program

## Code

```c
#include<stdio.h>
int main(){
    double grossSal, baseSal, da, hra;
    printf("Enter Basic Salary: ");
    scanf("%lf",&baseSal);
    da = (50 * baseSal) / 100;
    hra = (40 * baseSal) / 100;
    grossSal = baseSal + hra + da;
    printf("Gross Salary: %.2lf", grossSal);
    printf("\n\n");
}
```

## Output

![Output](/src/output/salary.png)

<!-- 
Note: if you are using text-editor to view this document I highly recommend you to use vs code or sublime text so its easier to read the contents of the file
VS Code - https://code.visualstudio.com/download
Sublime Text - https://www.sublimetext.com/download 
--!>
