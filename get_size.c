#include "main.h"

/**
 * get_size - Determines the argument size for formatting
 * @format: Format string specifying the arguments
 * @i: Index of the current argument
 *
 * Return: Size indicator.
 */
int get_size(const char *format, int *i)
{
	int currentIdx = *i + 1;
	int size = 0;

	if (format[currentIdx] == 'l')
		size = S_LONG;
	else if (format[currentIdx] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = currentIdx - 1;
	else
		*i = currentIdx;

	return (size);
}


