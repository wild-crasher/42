int ft_fibonacci(int nb);

int	ft_fibonacci(int nb)
{
	if(nb < 0)
		return(-1);
	if(nb <=2)
		return(nb);
	return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}
