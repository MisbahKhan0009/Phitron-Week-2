#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Test Data: ");
    scanf("%d", &n);

    printf("The first 7 natural number is: ");

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nThe Sum of Natural Number upto %d terms %d ", n, sum);

    return 0;
}