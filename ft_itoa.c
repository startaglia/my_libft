#include "libft.h"

static int check_nb(int n)
{
    int i;

    i = 0;
    while(n != 0)
    {
        n/=10;
        i++;
    }
    return(i);
}

char *ft_itoa(int n)
{
    int len;
    char *res;

    len = check_nb(n);
    if(n < 0)
    {
        res = (char *) malloc(sizeof(res) * (len) + 2);
        if(!res)
            return(NULL);
		n = -n;
        res[0] = '-';
        while (1 <= len)
        {
            res[len] = n % 10 + 48;
            n /= 10;
            len --;
        }
    }
    else if(n > 0)
    {
        res = (char *) malloc(sizeof(res) * (len));
        if(!res)
            return(NULL);
        while (0 < len)
        {
            res[len - 1] = n % 10 + 48;
            n /= 10;
            len--;
        }
    }
    return(res);
}