#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void print_hex(char H)
{
    char *hexbase = "0123456789abcdef";
    char digit1 = hexbase[H/16];
    char digit2 = hexbase[H%16];

    ft_putchar('\\');
    ft_putchar(digit1);
    ft_putchar(digit2);
}
void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < 32 || str[i] == 127)
        {
            print_hex(str[i]);
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
}
//int main()
//{
    //ft_putstr_non_printable("Coucou\ntu vas bien ?");
    //return (0);
//}
