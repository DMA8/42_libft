char    ft_tolower(char s)
{
    if (s >= 'A' && s <= 'Z')
        return (s + ('a' - 'A'));
    return (s);
}