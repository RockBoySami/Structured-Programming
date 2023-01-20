#include <stdio.h>
int main()
{
    int array_1[50], array_2[50], merge[100];
    int s_1, s_2, s_3, i, k;

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &s_1);
    for (i = 0; i < s_1; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &array_1[i]);
        merge[i] = array_1[i];
    }
    k = i;
    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &s_2);

    for (i = 0; i < s_2; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &array_2[i]);
        merge[k] = array_2[i];
        k++;
    }
    printf("The merged array is : ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merge[i]);
    }

    // sorting array section
    s_3 = s_1 + s_2;
    for (i = 0; i < ; i++)
    {
        /* code */
    }

    return 0;
}
