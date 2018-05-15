#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_alphabet(void)
{
	char i = 97;
	while(i<123){
		ft_putchar(i);
		i++;
	}
}

int	main()
{
	ft_print_alphabet();
	return(0);
}
