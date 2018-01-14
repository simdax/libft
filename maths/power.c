#include "ft_maths.h"

float	ft_pow(float nb, float pow)
{
  float	res;
  int	integer;
  float floating_part;
  float add;

  integer = (int)pow;
  floating_part = pow - integer;
  res = 1;
  add = 0;
  if (nb == 0)
    return (0);
  if (integer >= 0)
    while (integer--)
      res *= nb;
  else
    return (1 / ft_pow(nb, -pow));
  if (floating_part > 0)
    add = ft_root(nb, (int)(1.0 / floating_part));
  return (res + add);
}
