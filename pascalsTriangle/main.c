#include <stdio.h>
int main()
{
    int i, j,k, num = 1, lines = 5,spaces=lines;
    for (i = 0; i < lines; i++)
    {
        for (k = 1; k < spaces; k++)
        {
            printf(" ");
        }
        num = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        spaces--;
        printf("\n");
    }
}