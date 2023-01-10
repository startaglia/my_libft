#include "libft.h"
/*
Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if(!del || !lst || |*lst)
        return;
    while(lst && *lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*del)(lst->content);
        free(lst);
        *lst = tmp;
    }
}