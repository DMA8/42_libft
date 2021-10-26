#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*nxt;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		nxt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nxt;
	}
}
