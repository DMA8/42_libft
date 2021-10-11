#include <stdio.h>
#include <ctype.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	main()
{
	printf("test ft_isalpha passed %d\n", ft_isalpha('A') > 0 && isalpha('A') > 0);
	printf("test ft_isnum passed %d\n", ft_isdigit('1') > 0 && isdigit('1') > 0);
	printf("test ft_isalnum passed %d\n", ft_isalnum('9') > 0 && isalnum('9') > 0);
}
