#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(*content)))
		return (NULL);
	if (!content)
		new->content = NULL;
	else
	{
		if (!(new->content = (void *)malloc(*content)))
			return (NULL);
		ft_memcpy(new->content, content, *content);
	}
	new->next = NULL;
	return (new);
}
