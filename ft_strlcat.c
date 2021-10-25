#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t nbytes)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	ind;

	ind = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);

	if (nbytes < len_dst + 1)
		return (nbytes + len_src);
	else
	{
		while (src[ind] && len_dst + ind < nbytes -1)
		{
			dst[len_dst + ind] = src[ind];
			ind++;
		}
	}
	dst[len_dst + ind] = 0;
	return (len_dst + len_src);
}
