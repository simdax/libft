#include "ft_maths.h"

float	ft_root(int nb, int exp)
{
  double i = 1;
  double res = 0;
  int precision = 7;

  if (!exp) //undefined
    return (0);
  while (precision)
    {
      if (ft_pow(res, exp) > nb)
        {
          res -= i;
          i /= 10;
          --precision;
        }
      res += i;
    }
  return (res);  
}
