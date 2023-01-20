// find the second heighest number in a array
#include <stdio.h>
main()
{
    int array[7] = {10, 40, 42, 57, 3, 6, 7};
    int max, second_h;

    max = array[0];
    for (int i = 0; i < 7; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    second_h = array[0];
    for (int i = 0; i < 7; i++)
    {
        if (array[i] > second_h && array[i] != max)
        {
            second_h = array[i];
        }
    }
    printf("the maximum element is: %d \n", max);
    printf("the second highst is: %d \n", second_h);
    return 0;
}