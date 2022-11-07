#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	signed int t;
	signed int a, b, c, d, e;
	
	scanf("%d ", &t);
	for(int i = 1; i <= t; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%d\n", (a - (b + c + d)));
	}
	
	
	
	

	return 0;

}