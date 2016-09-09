void	ft_print_combo(void)
{
	int x;
	int y;
	int z;

	x='0';
	y='0';
	z='0';

	while(x <= '9')
	{
		y = x + 1;
		while (y <='9')
		{
			z = y + 1;
			while (z <= '9') 
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				ft_putchar(',');
				ft_putchar(' ');
				z++;
			}
		y++;
		}
	x++;
	}
}
