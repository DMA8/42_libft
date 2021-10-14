int ft_atoi(const char *s)
{
    int str_index;
    int sign;
    int result;

    str_index = 0;
    sign = 1;
    result = 0;
    while (s[str_index] == '\t' || s[str_index] == ' ' || s[str_index] == '\n')
        str_index++;
    if (s[str_index] == '-')
    {
        str_index++;
        sign = -1;
    }
    while (s[str_index] >= '0' && s[str_index] <= '9')
    {
        result = (result * 10) + s[str_index] - '0';
        str_index++;
    }
    return result * sign;
}