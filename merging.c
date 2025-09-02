#include <stdio.h>
int main()
{
    int x,y,a[100],b[100],c[100],i=0,j=0,k=0;
    printf("Enter the size of the first sorted array: ");
    scanf("%d", &x);
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < x; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of the second sorted array: ");
    scanf("%d", &y);
    printf("Enter elements for the second array :\n");
    for (int i = 0; i < y; i++)
        scanf("%d", &b[i]);
    while (i < x && j < y)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < x)
    {
        c[k++] = a[i++];
    }
    while (j < y)
    {
        c[k++] = b[j++];
    }
    printf("Merged sorted array: ");
    for (i = 0; i < (x+y); i++)
        printf("%d ", c[i]);
    return 0;
}