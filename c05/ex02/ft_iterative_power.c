//#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
    int result;

    result = nb;
    if ((nb == 0 && power == 0)||(power == 0))
        return(1);
    if ((nb < 0)||(nb == 0))
        return(0);
    while (power > 1){
        result = result*nb;
        power--;
    }
    return(result);
}
//int main()
//{
    //int x = ft_iterative_power(0,0);
    //printf("the power is: %d\n", x);
//}