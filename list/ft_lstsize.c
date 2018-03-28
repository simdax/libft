#include "lst_includes.h"

int	ft_lstsize(t_list *list)
{
  int ret;

  ret = 0;
  while(list)
    {
      ++ret;
      list = list->next;
    }
  return (ret);
}	
