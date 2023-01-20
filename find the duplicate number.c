// find the duplicate number in a array
#include <stdio.h>
int main()
{
    int array[8] = {1, 2, 3, 7, 56, 7, 4, 9, 7, 3};
    int flag = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (array[i] == array[j])
            {
                printf("The duplicate number is: %d\n", array[j]);
                flag = 1;
                break;
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    return 0;
}
