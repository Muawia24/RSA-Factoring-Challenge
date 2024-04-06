#include "main.h"

/**
 * is_prime - to check fore prime numbers for given number
 * @buf: pointer to string number
 * Return: True or false
 */
void is_prime(char *buf)
{
	u_int32_t num;
	u_int32_t i;

	num = atoi(buf);

	if (num == 0 || num == 1)
		return;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d = %d*%d\n", num, num / i, i);
			break;
		}
	}
}
