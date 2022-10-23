#include <stdio.h>

int main()
{

    int i = 101;
    int sum = 0;

    while (i--)
    {
        sum = sum + i;
    }
    printf("%d ", sum);
    return 0;
}