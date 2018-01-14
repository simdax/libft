#include "ft_maths.h"

int	round_up(float f)
{
    return ((int)f + 1);
}

int is_prime(int nb)
{
  int sqrt = round_up(ft_root(nb, 2));
  int i = 6;

  if (!(nb % 2) || !(nb % 3))
    return (0);
  while (i <= sqrt)
    {
      if (!(nb % (i - 1)) || !(nb % (i + 1)))
        return (0);
      i += 6;
    }
  return (1);
}

void	prime_factors(int nb)
{
  int sqrt = round_up(ft_root(nb, 2));
  int i = 2;

  while (i <= sqrt)
    {
      while (!(nb % i))
        {
          printf("%d*", i);
          nb /= i;
        }
      ++i;
    }
  printf("%d\n", nb);
}

/* typedef struct s_fract */
/* { */
/*   int diviseur; */
/*   int dividende; */
/* } t_fract; */

/* t_fract	prime_dec() */
/* { */
  
/* } */
