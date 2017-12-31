#include "../libft.h"

int main(void)
{
  t_list	*list;
  char		*mots[3] = {"io", "ttrs", "truc de fou"};
  int i = 3;

  list = NULL;
  while (--i >= 0)
    ft_lstadd(&list,
                  ft_lstnew(mots[i], strlen(mots[i]))
                  );
  ft_lstiter(list, ({ void _(t_list *el){
          printf("%s\n", el->content);
        } 
        _;}));
}
