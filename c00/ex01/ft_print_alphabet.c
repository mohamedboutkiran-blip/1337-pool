#include<unistd.h>
void ft_print_alphabet(void)
{
    int A = 'a';

    while (A < 'z')
    {
        write(1 ,&A, 1);
        A++;
    }
}