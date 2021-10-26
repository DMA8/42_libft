#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;

	if (nmemb + size < 2)
		return (NULL);
	ans = (void *)malloc(nmemb * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}
