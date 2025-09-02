#include <stdio.h>
int main()
{
    int n, i,a[100],e_sum,a_sum=0,x;
    printf("Enter the upper limit of the range: ");
    scanf("%d", &n);
    printf("Enter %d numbers in the range 1 to %d (one number is missing):\n", n-1, n);
    for (i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    e_sum=n*(n+1)/2;
    for (i=0;i<n-1;i++)
    {
        a_sum += a[i];
    }
    x=e_sum-a_sum;
    printf("The missing number is: %d", x);
    return 0;
}