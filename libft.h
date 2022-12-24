#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}
			t_list;

int	ft_strlen(char *str);
void ft_memset(void);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*
** Part 1 - Libc functions
*/
// void ft_memset();


#endif