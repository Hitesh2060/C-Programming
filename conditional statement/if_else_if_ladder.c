#include <stdio.h>

int main()
{
    int M, E, N, C, S;
    int t, p;
    printf("Enter the marks of students\n");
    scanf("%d %d %d %d %d", &M, &E, &N, &C, &S);
    t = M + E + N + C + S;
    p = t / 5;
    if (p >= 80)
    {
        

        printf("Distinction\n");
    }
    else if (p >= 70)
    {
        printf("first div\n");
    }
    else if (p >= 60)
    {
        printf("second div\n");
    }
    else if (p >= 50)
    {
        printf("third div\n");
    }
    else
    {
        printf("failed");
        }

    return 0;
}