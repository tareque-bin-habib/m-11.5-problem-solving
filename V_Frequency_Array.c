#include <stdio.h>

int main()
{
    int N, M, A[100005] = {0}, count[100005] = {0};

    // Read input
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Count the occurrence of each number
    for (int i = 0; i < N; i++)
    {
        count[A[i]]++;
    }

    // Print the result
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}