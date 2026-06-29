//#include<stdio.h>
int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb <= 1)
	{
		return(0);
	}
	while (n < nb)
	{
		if (nb % n == 0)
		{
			return(0);
		}
		n++;
	}
	return(1);
}
//int main()
//{
	//printf("%d \n",ft_is_prime(9));
	//printf("%d \n",ft_is_prime(1));
	//printf("%d \n",ft_is_prime(11));
//}
