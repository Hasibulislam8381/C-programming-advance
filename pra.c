#include <stdio.h>
int main()
{
    int max, a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %dth number ", i);
        scanf("%d", &a[i]);
        /* code */
    }
    max = a[i];
    for (i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            /* code */
        }

        /* code */
    }
    printf("The maximum num is %d ", max);
}