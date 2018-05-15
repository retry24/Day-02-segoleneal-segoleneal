#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char i = 122;
	while(i > 96){
		ft_putchar(i);
		i--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}
