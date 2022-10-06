#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int isNumber(char *str);
int *int_calloc(int nmemb, unsigned int size);
void multiply(int *product, char *n1, char *n2, int len1, int len2);

/**
  * error - print error message.
  * @code: error code for exit
  * Return: void
  */
void error(int code)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(code);
}

/**
* main - multiplies two numbers recieved through command line.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: 0 if success otherwise 1.
*/

int main(int argc, char *argv[])
{
	int *mul, i, j, len1 = 0, len2 = 0;

	if (argc != 3)
		error(98);

	for (i = 1; i < argc; ++i)
	{
		if (!isNumber(argv[i]))
			error(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)

