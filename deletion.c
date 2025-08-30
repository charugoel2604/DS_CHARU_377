#include <stdio.h>
int main() 
{
    int a[100],n, i, j, delete;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &delete);
    for(i=0;i<n;i++)
    {
        if (a[i]==delete) 
        {
            for (j=i;j<n-1;j++) 
            {
                a[j] = a[j+1];
            }
            n--;
            break;
        }
    }
        printf("Array after deleting : ");
        for (i=0;i<n;i++) 
        {
            printf("%d ",a[i]);
        }
    return 0;
}