int main(int argc, char **argv)
{	
	int i;

	i = argc;
	while ( i > 1 )
	{
		i--;
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
