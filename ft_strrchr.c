#include "libft.h"

char	*ft_strrchr(const char *src_str, int char_to_find)
{
	int	ind;

	ind = ft_strlen(src_str);
	while (ind + 1)
	{
		if (src_str[ind] == char_to_find)
			return ((char *)src_str + ind);
		ind--;
	}
	return (NULL);
}
