#include "ft_maths.h"

float	ft_pow(float nb, float pow)
{
  float	res;
  int	integer;
  float floating_part;

  integer = (int)pow;
  floating_part = pow - integer;
  res = 1;
  if (integer >= 0)
    while (integer--)
      res *= nb;
  else
    return (1 / ft_pow(nb, -pow));
  return (res);// + ft_root(nb, 1 / floating_part));
}
