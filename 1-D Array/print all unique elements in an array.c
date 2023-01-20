#include <stdio.h>
int main()
{
    int n, array[50];
    int c = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nElement-%d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {
                    c++;
                }
            }
        }
        if (c == 0)
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
