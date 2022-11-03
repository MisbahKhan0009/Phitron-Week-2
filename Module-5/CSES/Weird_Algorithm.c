#include <stdio.h>

int main()
{
	long long int i;
	scanf("%lld", &i);

	while (i > 1)
	{
		printf("%lld ", i);

		if (i % 2 == 0)
		{
			i /= 2;
		}
		else if (i % 2 == 1)
		{
			i = (i *3) + 1;
		}
	}
    printf("%lld ", i);
	

	return 0;
}