#include <stdio.h>

int main()
{
	int t;

	scanf("%d", &t);
	while (t--)
	{
		int n, i, isprime = 0;

		scanf("%d", &n);

		if (n == 0 || n == 1)
		{
			isprime = 1;
		}

		for (i = 2; i <= n / 2; ++i)
		{
			if (n % i == 0)
			{
				isprime = 1;
				break;
			}
		}

		if (isprime == 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}

	return 0;
}