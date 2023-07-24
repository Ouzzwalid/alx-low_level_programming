#include <stdio.h>
/**
 *_puts2 - prints every other character of a string, starting with
 *the first character followed by a new line, to stdout.
 *
 *@str: the string
 *
 *
 */
int main(void)
{
	char *str;
	int i = 0;
	str = "walid";
	
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
