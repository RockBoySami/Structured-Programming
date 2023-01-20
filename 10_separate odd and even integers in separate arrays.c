#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array : ", n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("\nElement-%d: ", i);
        scanf("%d", &array[i]);
    }
    printf("The Even elements are: ");
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d\t", array[i]);
        }
    }
    printf("\nThe Odd elements are: ");
    for (j = 0; j < n; j++)
    {
        if (array[j] % 2 != 0)
        {
            printf("%d\t", array[j]);
        }
    }

    return 0;
}
