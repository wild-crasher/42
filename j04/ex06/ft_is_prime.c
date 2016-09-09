int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);			// 0 & 1 are not prime
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);		// prime
		i++;
	}
	return (1);				// or not
}
