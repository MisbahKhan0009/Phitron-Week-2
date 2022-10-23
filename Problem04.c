#include <stdio.h>

int main()
{
    int n;
    printf("Input number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        printf("Number is: %d and Square of %d is : %d\n", i, i, i*i);
    }
    

    return 0;
}