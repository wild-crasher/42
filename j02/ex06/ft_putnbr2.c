void	ft_putnbr2(int nb);

void	_ft_putnbr2(int nb)
{
	unsigned int n = nb;
	if (n > 2147483647)
		return;
	if (n < -2147483648)
		return;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr2(n / 10);     // divisor
		ft_putnbr2(n % 10);     // remain
	}
	else
		ft_putchar(n + '\x30');
}
void ft_putnbr2(int nb)
{
	unsigned int n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	if (nb > 9)
	{
		ft_putnbr2(nb / 10);
		ft_putnbr2(nb % 10);
	}
	else
		ft_putchar(nb + '\x30');
}
