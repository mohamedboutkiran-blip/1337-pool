//#include<stdio.h>
int ft_recursive_factorial(int nb) // nb = 5; nb2 = 4;
{
    int nb2;
    int the_factorial;

    nb2 = (nb-1);
    if (nb == 0)
    {
        return(1);
    }
    if(nb < 0)
    {
        return(0);
    }
   the_factorial = nb*ft_recursive_factorial(nb2);
    return(the_factorial);
}

//int main()
//{
    //int x = ft_recursive_factorial(5);
    //printf("the factorial is: %d\n", x);
//}
