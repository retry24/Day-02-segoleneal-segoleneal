#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');

	else
		ft_putchar('P');
}

int	main()
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(100);
	ft_is_negative(-30);
	return(0);
}
