void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    ind;

    ind = 0;
    while (s[ind])
    {
        f(ind, s[ind]);
        ind++;
    }
}