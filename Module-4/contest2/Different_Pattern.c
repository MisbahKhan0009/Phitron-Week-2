#include <stdio.h>

int main()
{
	int i, j, rows;

	scanf("%d", &rows);
	for (i = 1; i <= rows; i++)
	{
		int k = i;
		for (j = 1; j <= i; j++)

		{

			printf("%d ", k--);
		}

		printf("\n");
	}

	return 0;
}