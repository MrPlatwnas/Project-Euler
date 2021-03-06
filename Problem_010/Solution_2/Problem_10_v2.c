#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main(void)
{
	int *arithmoi;
	int *protoi;
	
	arithmoi = malloc(2000000 * sizeof(int));
	if(arithmoi == NULL)
	{
		printf("Provlima sto malloc tou arithmoi\n");
		return 1;
	}
	printf("ok v1");
	protoi = malloc(1000000 * sizeof(int));
	if(protoi == NULL)
	{
		printf("Provlima sto malloc tou protoi\n");
		return 1;
	}
	printf("ok v2");
	long long unsigned metritis;
	
	for(metritis = 0; metritis < 2000000; metritis++)
	{
		arithmoi[metritis] = metritis;
	}
	
	long long unsigned counter;
	printf("ok v3");
	for(metritis = 2; metritis < 2000000; metritis++)
	{
		if(metritis == 50000 || metritis == 10000)
		{
			printf("%llu\n", metritis);
		}
		if(arithmoi[metritis] != -1)
		{	
			for(counter = (metritis+1); counter < 2000000; counter++)
			{
				if((counter % metritis) == 0)
				{
					arithmoi[counter] = -1;
				}
			}
		}
	}
	printf("Mpenei ston ksekatharismo twn protwn\n");
	counter = 0;
	for(metritis = 2; metritis < 2000000; metritis++)
	{
		if(arithmoi[metritis] != -1)
		{
			protoi[counter] = arithmoi[metritis];
			counter++;
		}
	}
	
	printf("Vgenei apo ton katharismo twn protwn\n");
	protoi[counter] = -2;
	counter = 1;
	long long unsigned athrisma = 0;
	int current = protoi[0];
	printf("Mpenei ston ipologismo tou athrismatos\n");
	while(protoi[counter] != -2)
	{
		athrisma = athrisma + protoi[counter];
		counter++;
	}
	printf("Athrisma/Sum:%llu\n", athrisma);
	
	return 0;
}
