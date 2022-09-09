#include <stdio.h>
#include <stdlib.h>
/*
 * main- prints the alphabets in lowercase and
 * uppercase.
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
