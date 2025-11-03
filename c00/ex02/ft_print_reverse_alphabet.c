#include<unistd.h>
void ft_print_reverse_alphabet(void)
{
	char Z = 'z';
	while(Z >= 'a')
	{
		write(1, &Z, 1);
		Z--;
	}
}
