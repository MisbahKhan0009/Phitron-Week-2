#include <stdio.h>

int main()
	{
		int t, charge;
		char c;
		scanf("%d", &t);
		while (t--)
		{
			scanf("%d%c", &charge, &c);

	 		if (charge==100)
			{
				printf("0 minutes\n");
			}
			 else if (charge>=80 && charge <100)
			{
				printf("%d minutes\n", (100-charge)*3);
			}
			 else if (charge<80 && charge >=60)
			{
				printf("%d minutes\n", ((80-charge)*2)+(20*3));
			}
			 else if (charge<60)
			{
				printf("%d minutes\n", ((60-charge)*1)+(20*3)+(20*2));
			}
		}
        return 0;
    }
