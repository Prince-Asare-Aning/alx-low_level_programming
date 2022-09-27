#include <stdio.h>
#include "main.h"
/**
 * main - enterpoint
 *
 * REturn: always 0
 */
int main(void)
{
	int squared;

	squared = getsquare(2);
	printf("the value of squared is: %d\n", squared);
	return (0);
}
