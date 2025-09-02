#include <stdio.h>
int main()
{
    int x,y,z=0,a[100],b[100],c[100],i,j;
    printf("Enter the size of the first array: ");
    scanf("%d", &x);
    printf("Enter elements of the first array:\n");
    for (i = 0; i < x; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of the second array: ");
    scanf("%d", &y);
    printf("Enter elements of the second array:\n");
    for (i = 0; i < y; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < x; i++)
    {
        int temp = 0;
        for (j = 0; j < z; j++)
        {
            if (a[i] == c[j])
            {
                temp= 1;
                break;
            }
        }
        if (!temp)
        {
            c[z] = a[i];
            z++;
        }
    }
    for (i = 0; i < y; i++)
    {
        int temp = 0;
        for (j = 0; j < z; j++)
        {
            if (b[i] == c[j])
            {
                temp = 1;
                break;
            }
        }
        if (!temp)
        {
            c[z] = b[i];
            z++;
        }
    }
    printf("Union : ");
    for (i = 0; i < z; i++)
        printf("%d ", c[i]);
    return 0;
}