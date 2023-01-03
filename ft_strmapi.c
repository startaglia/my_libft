#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    unsigned int i;
    int len;
    char *str;

    i = 0;
    len = ft_strlen((char *)s);
    str = (char *) malloc(sizeof(s) * len + 1);
    if(!str)
        return(NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return(str);
}