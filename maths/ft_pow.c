int	ft_pow (int base, int val)
{
  int	ret;

  ret = 1;
  while (base--)
    {
      ret *= val;
    }
  return (ret);
}
