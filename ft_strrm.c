#include "libft.h"

char	*ft_strrm(char const *str, char c, size_t n)
{
  char	*cpy;

  cpy = ft_strnew(ft_strlen(str));
  while (*str)
    {
      if (n && *str == c)
	  --n;
      else {
	*cpy = *str;
	++cpy;
      }
      ++str;
    }
  *cpy = 0;
  return (cpy);
}
