#include <stdio.h>

int main()
{
    int N, i, sum = 0;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        int digit;
        scanf("%1d", &digit);
        sum += digit;
    }

    printf("%d", sum);

    return 0;
}