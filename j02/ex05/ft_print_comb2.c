void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
 
	while(i < 99)
	{
		if(i == 1)
			while( j < 2 )
				j++;
		while( j < 100)
		{
			ft_putchar(i/10+'0');	// diviseur
			ft_putchar(i%10+'0');	// reste
			ft_putchar(' ');
			ft_putchar(j/10+'0');
			ft_putchar(j%10+'0');
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		j=0;
		i++;
	}
}
