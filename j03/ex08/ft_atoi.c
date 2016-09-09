int ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

    i = 0;
	res = 0;
	sign = 1;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '\x30' && str[i] <= '\x39')
	{
		res = res * 10 + str[i] - '\x30';
		i++;
	}
	return (sign * res);
}
