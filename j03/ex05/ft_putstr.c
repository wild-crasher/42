void    ft_putstr(char *str);

void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])	// not last char
	{
		ft_putchar(str[i]);
		i++;
	}
}
