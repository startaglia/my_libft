void *ft_memccpy(void *restrict dest, const void *restrict src,
                     int c, int n)
{
    if(!src)
        return(0);
    int i;

    i = 0;
    while (i < n && *(unsigned char *)(dest + i - 1) != (unsigned char) c)
    {
        *(unsigned char *)(dest + i) = *(unsigned char*) (src + i);
        i++; 
    }
    return(dest);
}