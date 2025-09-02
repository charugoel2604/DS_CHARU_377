#include <stdio.h>
int main()
{
    int x,y,a[100],b[100],i,j,k;
    printf("Enter the size of the first array: ");
    scanf("%d", &x);
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < x; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of the second array: ");
    scanf("%d", &y);
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < y; i++)
        scanf("%d", &b[i]);
    printf("Intersection of the two arrays: ");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                int temp =0;
                for (k = 0; k < i; k++)
                {
                    if (a[i] == a[k])
                    {
                        temp = 1;
                        break;
                    }
                }
                if (!temp)
                    printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}