#include "libft.h"
// static int	ft_isalpha(int c)
// {
//     if ((c >= 'a' && c <= 'z')
//     || (c >= 'A' && c <= 'Z'))
//         return (1024);
//     else
//         return (0);
// }

// static int	ft_isdigit(int c)
// {
//     if (c >= '0' && c <= '9')
//         return (2048);
//     else
//         return (0);
// }

int ft_isalnum(int c)
{
    if(ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
        return(8);
    else
        return(0);
}

