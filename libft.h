#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_memset.c"
# include "ft_bzero.c"

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
** Part 1 - Libc functions
*/
// void ft_memset();


#endif