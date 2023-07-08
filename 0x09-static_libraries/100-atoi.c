#include "main.h"
#include "ctype.h"
/**
 *atoi - converting string
 *@str - pointer to string
 *
 * Return: Always sucess
 */
int atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (isspace(str[i]))
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
	if (str[i] == '-')
	sign = -1;
	i++;
	}
	while (isdigit(str[i]))
	{
	result = result * 10 + (str[i] - '0');
	i++;
	}
	return (result * sign);
}
