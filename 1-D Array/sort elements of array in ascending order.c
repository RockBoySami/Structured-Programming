#include <stdio.h>
int main()
{
    int n, i, j, temporary;
    printf("Input the size of array : ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array :", n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("\nElement-%d: ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temporary = array[i];
                array[i] = array[j];
                array[j] = temporary;
            }
        }
    }
    printf("\nElements of array in sorted ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}