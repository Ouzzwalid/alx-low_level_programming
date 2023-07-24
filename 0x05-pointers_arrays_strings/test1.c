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
	int length = 0, i = 0, n ;
	str = "alid";
	
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	printf("length = %d\n", length);
	if (length % 2 == 0)
		n = length / 2;	
	else 
		n = (length - 1) / 2;
	while (n < length)
	{
	       putchar(*(str + n));
	       n++;
	}	       
	putchar('\n');
}
