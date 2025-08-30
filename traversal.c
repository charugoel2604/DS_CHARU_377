#include <stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}