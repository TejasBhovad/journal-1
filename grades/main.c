#include <stdio.h>
int main()
{
    printf("Enter Marks: ");
    int marks;
    scanf("%d", &marks);
    if ((marks >= 0) && (marks <= 40))
    {
        printf("Fail");
    }
    else if ((marks >= 41) && (marks <= 50))
    {
        printf("Grade C");
    }
    else if ((marks >= 51) && (marks <= 60))
    {
        printf("Grade B");
    }
    else if ((marks >= 61) && (marks <= 75))
    {
        printf("Grade A");
    }
    else if ((marks >= 76) && (marks <= 100))
    {
        printf("Grade A+");
    }
    else
    {
        printf("Marks are Invalid");
    }
    printf("\n\n");
    return 0;
}
