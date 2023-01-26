#include <stdio.h>
int main()
{
    int i, a, is_prime;

    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            is_prime = 1;
            for (int j = 2; i < a / 2; j++)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
            {
                printf("%d is a factor.", i);
            }
        }
    }

    return 0;
}