int ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
