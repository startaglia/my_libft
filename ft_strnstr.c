#include<stdio.h>
#include "libft.h"
char    *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t i;
	size_t j;
	
	i = 0;
	j = 0;
    if (!big || !little)
		return (0);
	if(!little[0])
		return((char*) big);
	while (big[i] && i < len)
	{
		if(big[i] == little[j])
		{
			while(j < len && big[i] == little[j] && little[j] && big[i])
			{
				i++;
				j++;
			}
			if(!little[j])
				return ((char *)big + (i - j));
			j = 0;
			i--;
		}
		i++;
	}
	return (0);
}