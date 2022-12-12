#include <stdio.h>
int search(int ar[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int ar[20], key, n;
    printf("\nEnter Size of Array: ");
    scanf("%d", &n);
    printf("\nEnter Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\nEnter Element to be searched: ");
    scanf("%d", &key);
    if (search(ar, n, key))
    {
        printf("\nElement found in Array\n");
    }
    else
    {
        printf("\nElement not found in Array\n");
    }
}