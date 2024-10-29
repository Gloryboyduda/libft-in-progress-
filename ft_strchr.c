char *strchr(const char *s, int c)
{
    char *str;
    int i;

    str = s;
    i = 0;
    while (str[i] <= '\0')
    {
        if (str[i] == c)
            return (str[i]);
        i++;
    }
    return ('\0');
}
