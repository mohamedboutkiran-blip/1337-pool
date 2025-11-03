#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char a, b, c, d;

	a = '0';
	while(a <= '9')
	{
		b = '0';
		while(b <= '8')
		{
			c = '0';
			while(c <= '9')
			{
				d = '1';
				while(d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					if(!(a == '9' && b == '8' && c == '9' && d == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
