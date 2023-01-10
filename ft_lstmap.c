#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *head;
    t_list *new;
    if(!(f) || !(del))
        return;
    head = NULL;
    while (lst)
    {
        //qui ci si entra solo se non si è riusciti ad allocare la mem, quindi se malloc ha fallito;
        if(!(new = ft_lstnew((*f)(lst->content))))
        {
            //?non ho capito perché se in un nodo ha fallito malloc bisogna cancellarli tutti dalla testa fino ad arrivare a quello
            while (head)
            {
                new = head->next;
                (*del)(lst->content);
                free(head);
                head = new;
            }
            lst = NULL;
            return (NULL);
        }
        //?non ho capito perchè bisogna utilizzare un inserimento in coda
        ft_lstadd_back(&head, new);
        lst = lst->next;
    }
    return(head);
}