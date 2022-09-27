#include <stdio.h>

/**
 * square - get the square of the number passed
 *
 * @num: number to be squared
 *
 * return: squared num or -1
 */
int getsquare(int num)
{
	if (sizeof(num) == sizeof(int))
	{
		return (num*num);
	}
	printf("please enter a valid number!\n");
	return (-1);
}
