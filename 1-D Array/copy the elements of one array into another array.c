#include <stdio.h>
int main()
{
    int n, arr_1[50], arr_2[50];
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array :", n);

    for (int i = 0; i < n; i++)
    {
        printf("\nelement -%d: ", i);
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr_2[i] = arr_1[i];
    }
    printf("\nThe elements stored in the first array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr_1[i]);
    }
    printf("\nThe elements copied into the second array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr_2[i]);
    }
    return 0;
}