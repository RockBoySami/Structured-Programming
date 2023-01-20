#include <stdio.h>
int main()
{
    int n, array[100];
    printf("\nInput the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("\nInput %d number of elements in the array : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nelement -%d:", i);
        scanf("%d", &array[i]);
    }
    printf("\nThe values store into the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nThe values store into the array in reverse are : \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
