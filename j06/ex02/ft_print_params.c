int main(int argc, char **argv)
{
	int i;

	if( argv > 0)
	{
		i = 1;
		while( i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
