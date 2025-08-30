#include <stdio.h>
int main() 
{
    int a[50],n,x,i,pos;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    printf("Enter the position to insert : ");
    scanf("%d", &pos);
        for (i = n; i > pos; i--) 
        {
            a[i] = a[i-1];
        }
        a[pos] = x;
        n++;
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    return 0;
}