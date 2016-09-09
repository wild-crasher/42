#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int idx;

	ft_putstr("prog: ");
	ft_putstr(argv[0]);
	ft_putstr("\n\n");

	if( argv > 0)
	{
		idx=1;
		while(idx < argc)
		{
			ft_putstr("parm ");
			ft_putnbr(idx);
			ft_putstr(": ");
			ft_putstr(argv[idx]);
			ft_putchar('\n');
			idx++;
		}
	}

    ft_putstr("ft_putchar('*'): ");
    ft_putchar('*');
	ft_putchar('\n');

	ft_putstr("ft_putstr(\"prout!\\n\"): ");
	ft_putstr("prout!\n");

	printf("atoi(65535): %d\n", ft_atoi("65535"));
	printf("atoi(-65535): %d\n", ft_atoi("-65535"));
								  
	//ft_print_combn();
/*
	int res;
	printf("size of d'un int: %ld\n",sizeof(res));
	//ft_putnbr(ft_atoi("65"));
	//
*/
/*	
	int tab[8] = {10, 23, 205, 8, 67, 285, 911, 42};
	int *ptr;

	ptr = &tab[0];

	idx=0;
	while( idx < 7)
	{
		ft_putnbr(tab[idx]);
		ft_putchar(' ');
		idx++;
	}
	ft_putchar('\n');
	ft_sort_integer_table(ptr, 8);

	idx=0;
	while( idx < 7)
	{
		ft_putnbr(tab[idx]);
	    ft_putchar(' ');
		idx++;
	}
	ft_putchar('\n');
*/
/*
	char ptr[] = "toto";

	ft_putchar(ptr[0]);	// affiche le premier car de "toto"
	ft_putchar('\n');
	ptr[1]='a';
	ft_putchar(ptr[1]); 
	ft_putchar('\n');

	ft_putstr(ptr);
	ft_putchar('\n');

	int	i;
	i = 0;
	while(ptr[i] != '\0')
	{
		ft_putchar(ptr[i]);
		i++;
	}
*/
	ft_putchar('\n');	
	return (0);
}
