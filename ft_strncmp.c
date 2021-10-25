#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	ind;

	ind = 0;
	while (ind < n)
	{
		if (str1[ind] != str2[ind])
			return ((unsigned char)str1[ind] - (unsigned char)str2[ind]);
		ind++;
	}
	return (0);
}
