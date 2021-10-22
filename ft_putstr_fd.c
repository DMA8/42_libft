#include "libft.h"
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    int ind;

    ind = 0;
    while(s[ind])
    {
        write(fd, s[ind], 1);
        ind++;
    }
}