#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void ft_print_comb(void)
{
	char x = 48;
	char y = 48;
	char z = 48;
	while(x<58 || y<58 || z<58)
	{	
		if(x!=y!=z || x<y<z)
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(z);
		}
                ft_putchar(',');
                ft_putchar(' ');
		x++;
		y++;
		z++;
	}
}	

int main()
{
	ft_print_comb();
	return(0);
}
