#include "ft_maths.h"

int main (int argc, char **argv)
{
  printf("%f\n", ft_pow(0, 2));
  printf("%f\n", ft_pow(2.3, 0));
  printf("%f\n", ft_pow(0.323, 2));
  printf("%f\n", ft_pow(2.3, -2)); 
  printf("%lf\n", ft_root(0, 3));
  printf("%lf\n", ft_root(8, 0));
  printf("%lf\n", ft_root(8, 3));
  printf("%lf\n", ft_root(8.2, 3.4));
  return (0);
}
