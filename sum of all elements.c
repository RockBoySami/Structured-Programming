#include <stdio.h>
int main()
{
    int n, arr[50], sum = 0;
    printf("Enter the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("\nInput  %d elements in the array : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nelement -%d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nSum of all elements stored in the array is : %d\n", sum);

    return 0;
}
