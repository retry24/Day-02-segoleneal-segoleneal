#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void ft_print_comb(void)
{
	char x = 48;
	char y = 49;
	char z = 48;
	while(x<57)
	{
		if(x<57)
		{		
			ft_putchar(x);
		}

		if(y<57)
		{	

			ft_putchar(y);
		}

		if(z<57)
		{
			z++;
			if(z!=x && z!=y)
        	        {
                	        ft_putchar(z);
               		}
		}
			y++;	
			ft_putchar(',');
                	ft_putchar(' ');           
	}
}	

int main()
{
	ft_print_comb();
	return(0);
}
