#include <stdio.h>


int main(void)
{
	int i=0,n=5, array[5];
	
	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	while (i<n)
	{
		printf("%d", array[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
