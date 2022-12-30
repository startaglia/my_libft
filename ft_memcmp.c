 #include "libft.h"
 int ft_memcmp(const void *s1, const void *s2, int n)
 {
    int i;

    i = 0;
    while (i < n)
    {
        if(*(char *)(s1 + i) != *(char *)(s2 + i))
            return (*(char *)(s1 + i) - *(char *)(s2 + i));
        i++;
    }
    return(0);
 }