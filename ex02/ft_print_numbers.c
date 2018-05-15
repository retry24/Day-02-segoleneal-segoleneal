#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char i = 48;
	while(i < 58){
		ft_putchar(i);
		i++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}
