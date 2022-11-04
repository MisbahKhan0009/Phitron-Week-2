#include <stdio.h>
#include <stdint.h>


int main()
{
	int t;
	int a, b, c, d;
	scanf("%d ", &t);
	for(int i = 1; i <= t; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
	}
	printf("%d\n", (a - (b + c + d)));
	

	return 0;

}