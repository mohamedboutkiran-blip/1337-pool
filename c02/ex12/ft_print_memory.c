#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_adress(unsigned long address) //bach atb3 ladrissat s lhexadecimal form nsn
{
	char *hex_base = "0123456789abcdef";
	char buffer[16];
	int i = 15;
	while(i >= 0)
	{
		buffer[i] = hex_base[address%16];
		address = address / 16;
		i--;
	}
	i = 0;

	while(i < 16)
	{
		ft_putchar(buffer[i]);
		i++;
	}
}

void ft_put_hex(unsigned char H) //bach antb3 lcharachters s lhexdecimal formnsn
{
	char *hex_base = "0123456789abcdef";
	char digit1;
	char digit2;

	digit1 = hex_base[H/16];
	digit2 = hex_base[H%16];
	ft_putchar(digit1);
	ft_putchar(digit2);
}

void ft_print_char(unsigned char *charachter, int size)//bach antb3 lcharachters l3adiyin
{
	int p = 0;

	while(p < size)
	{
		if(charachter[p] >= 32 && charachter[p] <= 126)
		{
			ft_putchar(charachter[p]);
		}
		else
		{
			ft_putchar('.');
		}
		p++;
	}
}

void ft_linesize(unsigned char *str, int size)//bach antb3 kol str wa7dot
{
	int i = 0;
	int ligne_size;

	while(i < size)
	{
		if(size - i >= 16)
		{
			ligne_size = 16;
		}
		else
		{
			ligne_size = size - i;
		}
		ft_put_adress((unsigned long)(str + i));
		ft_putchar(':');
		ft_putchar(' ');
		int j = 0;

		while(j < ligne_size)
		{
			ft_put_hex(str[i + j]);
			if(j % 2 != 0)
			{
				ft_putchar(' ');
			}
			j++;
		}
		while(j < 16)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			if(j % 2 != 0)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_print_char(str + i, ligne_size);
		ft_putchar('\n');
		i = i + 16;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *ptr = (unsigned char*)addr;

	if(size == 0)
	{
		return (addr);
	}
	else
	{
		ft_linesize(ptr,size);
	}
	
	return (addr);
}

int main()
{
	ft_print_memory("Hello Worled\n how are you??\t",30);
}