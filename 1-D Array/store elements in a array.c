#include <stdio.h>
int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("element -%d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nElements in array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}