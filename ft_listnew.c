#include "libft.h"

t_list 			*ft_lstnew(void *content)
{
    t_list *newElement;
    if (!(newElement = (t_list*) malloc(sizeof(t_list*))));
        return(NULL);
    newElement->content = content;
    newElement->next = NULL;
    return(newElement);
}