// Find the maximum and minimum number in a array
// TAKING INPUT FROM THE USER

#include <stdio.h>
int main()
{
    int n, i, max, min;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    printf("\nInput  %d elements in the array : ", n);
    int array_1[n];
    for (i = 0; i < n; i++)
    {
        printf("\nElement-%d: ", i);
        scanf("%d", &array_1[i]);
    }
    max = array_1[0];
    for (i = 0; i < n; i++)
    {
        if (array_1[i] > max)
        {
            max = array_1[i];
        }
    }
    min = array_1[0];
    for (i = 0; i < n; i++)
    {
        if (array_1[i] < min)
        {
            min = array_1[i];
        }
    }
    printf("\nMaximum element is : %d", max);
    printf("\nMinimum element is : %d", min);
    return 0;
}

// without taking input from the user
/*#include <stdio.h>
main()
{
    int array[7] = {10, 40, 42, 57, 3, 6, 7};
    int i, max, min;

    max = array[0];
    for (i = 0; i < 7; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    min = array[0];
    for (i = 0; i < 7; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("the maximum element is: %d \n", max);
    printf("the minimum element is: %d \n", min);
    return 0;
}
*/