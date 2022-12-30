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










char    *ft_strnstrww(const char *haystack, const char *needle, int len)
{
	int	i;
	int	j;

	if (!haystack || !needle)
		return (0);
	if (!needle || !needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (0);
}