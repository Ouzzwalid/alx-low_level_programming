#include <stdio.h>


int main(void)
{
	char *str;
	int i;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	
	for (i = 0; *(str+i) != '\0'; i++)
	{
	}
	while (i >= 0)
	{
		putchar(*(str+i));
		i--;
	}
	putchar('\n');
}
