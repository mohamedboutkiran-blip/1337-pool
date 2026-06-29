//#include<stdio.h>
int ft_iterative_factorial(int nb)
{
    int nb2;

    if (nb < 0)
        return(0);
    if (nb == 0)
        return(1);
    nb2 = (nb-1);
    while (nb2 != 0)
    {
        nb = nb * nb2;
        nb2--;
    }
    return(nb);
}
//int main()
//{
    //int x = ft_iterative_factorial(0);
    //printf("the factorial is: %d \n", x);
//}