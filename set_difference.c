#include <stdio.h>
int main()
{
    int a[100], b[100], c[100],x, y, z = 0,i, j, found;
    printf("Enter the size of the first array: ");
    scanf("%d", &x);
    printf("Enter elements for the first array:\n");
    for (i = 0; i < x; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of the second array: ");
    scanf("%d", &y);
    printf("Enter elements for the second array:\n");
    for (i = 0; i < y; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < x; i++)
    {
        found = 0;
        for (j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            c[z] = a[i];
            z++;
        }
    }
    printf("Set Difference (A-B): ");
    for (i = 0; i < z; i++)
        printf("%d ", c[i]);
    return 0;
}