void *ft_memmove(void *dest, const void *src, int n)
{
    if(!src)
        return(0);
    int i;

    i = 0;
    while (i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char*) (src + i);
        i++; 
    }
    return (dest);
}