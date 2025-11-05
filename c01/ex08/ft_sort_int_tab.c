#include<stdio.h>
void ft_swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;              //index 0 of the array

    while(i < size -1)
    {
        int j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                ft_swap(&tab[i], &tab[j]);
            }
            j++;
        }
        i++;
    }
}

