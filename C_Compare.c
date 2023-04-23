#include <stdio.h>
#include <string.h>

int main()
{
    char X[21], Y[21];
    scanf("%s %s", X, Y);

    int cmp = strcmp(X, Y);

    if (cmp < 0)
    {
        printf("%s", X);
    }
    else if (cmp > 0)
    {
        printf("%s", Y);
    }
    else
    {
        printf("%s", X); // or printf("%s", Y);
    }

    return 0;
}