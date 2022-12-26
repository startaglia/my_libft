char    *ft_strrchr(const char *s, int c)
{
    int len;

    len = 0;

    while (s[len])
        len ++;
    if (!s)
		return (0);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char*)(s + (len)));
		len--;
	}
	return (0);
}