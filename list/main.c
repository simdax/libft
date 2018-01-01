#include "../libft.h"
#include <stdarg.h>
#include <unistd.h>

void	print(t_list *el, void *mem)
{
  int i = 0;
  
  while(i < 2)
    {
      write(1, mem, strlen(mem));
      mem += strlen(mem);
      ++i;
    }
}

int	main(void)
{
  t_list	*list;
  char		*mots[3] = {"io", "ttrs", "truc de fou"};
  int i = 3;

  list = NULL;
  while (--i >= 0)
    ft_lstadd(&list,
	      ft_lstnew(mots[i], strlen(mots[i]))
	      );
  void *mem = malloc(1000);
  bzero(mem, 1000);
  strcpy(mem, "coucou");
  strcat(mem, "caca");
  ft_lstiter2(list, print, mem);
}
