#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == '\v' || c == '\t' || c == '\n'
		|| c == ' ' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int	str_index;
	int	sign;
	int	result;

	str_index = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(s[str_index]))
		str_index++;
	if (s[str_index] == '-')
	{
		str_index++;
		sign = -1;
	}
	else if (s[str_index] == '+') 
		str_index++;
	while (s[str_index] >= '0' && s[str_index] <= '9')
	{
		result = (result * 10) + (s[str_index] - '0');
		str_index++;
	}
	return (result * sign);
}
