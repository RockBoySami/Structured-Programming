#include <stdio.h>
int main()
{
    int array[10] = {44, 3, 10, 12, 7, 50, 41, 72, 2, 25}, i;
    int sum = 0;
    printf("The even numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d\t", array[i]);
            sum = sum + array[i];
        }
    }
    printf("\nThe sum is : %d\n", sum);
    return 0;
}
