#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, gcd;
	scanf("%d %d", &a, &b);

	if (b > a)
	{
		int temp = b;
		b = a;
		a = temp;
	}

	for (int i = 1; i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	int lcm = (a * b) / gcd;

	printf("%d ", lcm);
	return 0;
}