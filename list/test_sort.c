#include "includes.h"
#include <stdio.h>

void	p(t_list *el)
{
  printf("%s ", el->content);
}


int cmp(t_list *one, t_list *two)
{
  return (!ft_strcmp(one->content, two->content));
}

int	main(void)
{
  t_list	*list;
  char		*mots[5] = {"ft_coucou.c", "ft_coucou.o", "Makefile", "list"};
  int i = 5;

  list = NULL;
  while (--i >= 0)
    ft_lstadd(&list,
	      ft_lstnew(mots[i], strlen(mots[i]))
	      );
  list = sort(list, cmp);
  ft_lstiter(list, p);
}
