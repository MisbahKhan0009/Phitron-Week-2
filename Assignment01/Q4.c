#include <stdio.h>

int main()
{
	long long int a;
	scanf("%lld", &a);
	
	int sum = 0;
	while (a > 0)
	{
		sum = sum + a % 10;
		a = a / 10;
	}

	printf("%d", sum);
	return 0;

	return 0;
}