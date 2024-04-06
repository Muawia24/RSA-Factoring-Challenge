#include "main.h"

/**
 * print_product - to check fore prime numbers for given number
 * @buf: pointer to string number
 * Return: True or false
 */
int print_product(char *buf)
{
	u_int32_t num;
	u_int32_t i;

	num = atoi(buf);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}

	return (0);
}
