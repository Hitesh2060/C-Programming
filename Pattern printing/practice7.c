#include <stdio.h>

int main()
{
    int i, j, N = 0;
    for (i = 1; i <= 5; i++)
    {
        N = N + 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", N);
        }
        printf("\n");
    }
    return 0;
}

/*output
            1
            22
            333
            4444
            55555     */