#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*test;

	test = *lst;

	while (test->next)
		test = test->next;
	test->next = new;
}
