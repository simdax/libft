

#include "libft.h"

t_list	*ft_lstfind(t_list *el, int (*f)(t_list *el, void *cmp), void *cmp)
{
  while (el)
    {
      if (f(el, cmp))
	return (el);
      el = el->next;
    }
  return (0);
}
