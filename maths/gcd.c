#include "../libft.h"
#include "ft_maths.h"

int gcd(int a, int b)
{
  int max = ft_max(a, b);
  int min = ft_min(a, b);
  int tmp = 1;
  
  while ((tmp = max % min))
    {
      max = min;
      min = tmp;
    }
  return (min);
}
