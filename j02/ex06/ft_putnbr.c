void    ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
    if (nb > 2147483647 || nb < -2147483648)
        return ;
    if (nb == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);	// divisor
		ft_putnbr(nb % 10);	// remain
	}
	else
		ft_putchar(nb + '\x30');
    return;
}
