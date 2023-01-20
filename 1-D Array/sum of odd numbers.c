// FIND THE SUM OF ODD NUMBERS IN A ARRAY
// TAKING INPUT FROM THE USER
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("PLEASE ENTER THE SIZE OF A ARARY THAT YOU WANT TO STROE: ");
    scanf("%d", &n);
    printf("\nPlease enter %d element in your array: ", n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("\nElement-%d: ", i);
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0)
        {
            sum += array[i];
        }
    }
    printf("\nTHE SUM OF ODD NUMBER IN THE ARRAY IS: %d\n", sum);

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int array[10] = {44, 3, 10, 12, 7, 50, 41, 72, 2, 25};
    int sum = 0;
    printf("The odd numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d\t", array[i]);
            sum += array[i];
        }
    }
    printf("\nThe sum is: %d\n", sum);
    return 0;
}
*/