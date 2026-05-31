#include<unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_strlen(char *str) // bach an3br tol n l base
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return(length);
}
int ft_valid_base(char *the_base) // bach anzr is t3dl l base 
{
    int i;
    int j;

    i = 0;
    j = 0;
    
    if (ft_strlen(the_base) < 2)
        return (0);
    while (the_base[i] != '\0')
    {
        if (the_base[i] == '-' || the_base[i] == '+')
            return (0);
        j = i+1;
        while (the_base[j] != '\0')
        {
            if (the_base[i] == the_base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}
void ft_putnbr_base(int nbr, char *base) // tmrin
{
    int base_length;
	long nb;

    base_length = ft_strlen(base);
    if(!ft_valid_base(base))
    {
        return;
    }
	nb = nbr;
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= base_length)
    {
        ft_putnbr_base(nb / base_length, base);
    }
    ft_putchar(base[nb % base_length]);
}
//int main()
//{
    //ft_putnbr_base(1002, "2435");
//}