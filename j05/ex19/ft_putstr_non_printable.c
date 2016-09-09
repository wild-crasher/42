#define ABS(x) (((x) < 0) ? -(x) : (x))

int		get_size_22(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] < 32 || str[i] > 126)
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base_22(int nbr, char *base)
{
	int		base_size;
	int		i;
	int		result[100];

	base_size = get_size_22(base);
	i = 0;
	if (base_size > 1)
	{
		if (nbr < 0)
			ft_putchar('-');
		while (nbr)
		{
			result[i] = ABS(nbr % base_size);
			nbr = nbr / base_size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[result[i]]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			if (*str < 16)
				ft_putchar('0');
			ft_putnbr_base_22((int)(*str), "0123456789abcdef");
		}
		else
			ft_putchar(*str);
		str++;
	}
}
