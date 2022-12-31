#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 256; i++)
    {
        printf("Charactor of %d\t - \t%c\n", i, i);
    }

    return 0;
}