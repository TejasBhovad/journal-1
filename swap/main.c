#include <stdio.h>
void callValue(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("\nAfter Call by Value Swap:\n");
    printf("A: %d\nB: %d", a, b);
}
void referenceValue(int *m, int *n)
{
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
    printf("\nAfter Call by Reference Swap:\n");
    printf("A: %d\nB: %d", *m, *n);
}
int main()
{
    int a, b;
    int ar[] = {2, 4, 6, 8, 10};
    printf("Value of A:");
    scanf("%d", &a);
    printf("Value of B:");
    scanf("%d", &b);
    printf("\nBefore Call by Value Swap:\n");
    printf("A: %d\nB: %d", a, b);
    callValue(a, b);
    printf("\nBefore Call by Reference Swap:\n");
    printf("A: %d\nB: %d", a, b);
    referenceValue(&a, &b);
    printf("\nArray Displayed using pointers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ar + i));
    }
    printf("\n");
}