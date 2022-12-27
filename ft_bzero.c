void ft_bzero(void *s, int n)
{
    int i;

    if(!s)
        return;
    i = 0;
    while (i < n)
    {
        *(unsigned char *) (s + i) = 0;
        i++;
    }
}