#include <stdio.h>

int main()
{
	int i, j, n;
	int arr[n];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &j);
	if (j == 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", arr[i]);
            break;
		}
	}

	int k;
	for (j = 1; j <= k; j++)
	{
		arr[i] = arr[j + k];

		printf("%d", arr[i]);
	}

	return 0;
}