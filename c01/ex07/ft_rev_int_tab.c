#include<stdio.h>
void ft_swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size - 1;

    while(i < j)
    {
        ft_swap(&tab[i], &tab[j]);
        i++;
        j--;
    }
}
