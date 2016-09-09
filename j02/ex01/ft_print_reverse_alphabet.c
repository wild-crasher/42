void	ft_print_reverse_alphabet(void)
{
	char	c;

	c='\x7a';

	while(c >= '\x61')
	{
		ft_putchar(c);
		c--;
	}
}
