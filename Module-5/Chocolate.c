#include <stdio.h>

int main()
{
	int t, choc, pack;
	scanf("%d", &t);
    
    choc= t;
    pack = t;

	while (pack >= 4)
	{
		choc += (pack / 4);
		pack = (pack / 4) + (pack % 4);
	}

	printf("chocolates: %d\n", choc);
   return 0;
}