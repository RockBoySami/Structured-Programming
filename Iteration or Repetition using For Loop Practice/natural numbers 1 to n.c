#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The natural numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }
    return 0;
}
