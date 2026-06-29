#include<unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}
int main(int argc, char *argv[])
{
	int i;
	int arg;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		ft_putchar('\n');
		arg++;
	}
	return(0);
}
