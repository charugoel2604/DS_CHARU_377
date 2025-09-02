#include <stdio.h>
int main()
{
    int n, a[100], i, j, k, count, printed;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Repeating elements: ");
    for (i=0;i<n;i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
            if (a[i] == a[j])
                count++;
        if (count > 1)
        {
            printed = 0;
            for (k = 0; k < i; k++)
            {
                if (a[i] == a[k])
                {
                    printed = 1;
                    break;
                }
            }
            if (!printed)
                printf("%d ", a[i]);
        }
    }
    printf("\nNon-repeating elements: ");
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
            if (a[i] == a[j])
                count++;
        if (count == 1)
            printf("%d ", a[i]);
    }
    return 0;
}