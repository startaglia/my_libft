#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char * res;

    i = 0;
    if(!s)
        return(NULL);
    res = (char*) malloc (len * (sizeof(char*)) + 1);
    if(!res)
        return(NULL);
    while(i <= len)
    {
        res[i] = s[start]; 
        start++;
        i++;
    }
    res[i] = 0;
    return(res);
}