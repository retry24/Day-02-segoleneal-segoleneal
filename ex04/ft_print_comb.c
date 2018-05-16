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
	while(x<57 && y<57 && z<57)
	{	
		ft_putchar(x);
		y++;
		if(y!=x && y>x)
		{
			ft_putchar(y);
		}
		else {
			ft_putchar('Y');	
		}
		z++;
		if(z!=x && z!=y)
                {
                        ft_putchar(z);
                }
                else {
                        z++;
			ft_putchar(z);
                }

		x++;
		ft_putchar(',');
                ft_putchar(' ');
	}                
}	

int main()
{
	ft_print_comb();
	return(0);
}
