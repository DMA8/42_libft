#include "libft.h"
#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char    *int_as_chars;
    int     bufsize;

    int_as_chars = (char *)ft_itoa(n);
    bufsize = ft_strlen(int_as_chars);
    write(fd, int_as_chars, bufsize);
}