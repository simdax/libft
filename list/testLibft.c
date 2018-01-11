#include "includes.h"

int	main(void)
{
  t_list	*list;
  char		*mots[4] = {"ft_coucou.c", "ft_coucou.o", "Makefile", "list"};
  int i = 4;

  list = NULL;
  while (--i >= 0)
    ft_lstadd(&list,
	      ft_lstnew(mots[i], strlen(mots[i]))
	      );
  list = ft_lstsort(list, ft_cmp_str);
  ft_lstiter(list, ft_lstprint);
}
