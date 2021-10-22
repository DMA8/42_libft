#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    ft_putendl_fd(s, fd);
    write(fd, "\n", 1);
}
