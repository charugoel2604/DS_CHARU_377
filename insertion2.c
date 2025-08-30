#include <stdio.h>
int main()
{
    int a[100],n,i,x,pos;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &x);
    pos = n;
    for (i = 0; i < n; i++) 
    {
        if (x < a[i])
        {
            pos = i;
            break;
        }
    }
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}