#include <stdio.h>

int main()
{
	int i = 0;
	
	int a = 1;
	int b = 2;
	int c = 3;
	
	for(c = 3; c < 5000; c++)
	{
		for(b = 2; b < c; b++)
		{
			for(a = 1; a < b; a++)
			{
				if((a * a) + (b * b) == (c * c))
				{
					if(a + b + c == 1000)
					{
						printf("A: %d B: %d C: %d\n", a, b, c);
						printf("Product: %d", a * b * c);
						return 1;
					}
				}
			}
		}
	}
}
