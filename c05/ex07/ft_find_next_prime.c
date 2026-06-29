//#include<stdio.h>
int is_nb_prime (int nb) //bach anzr is iga nb prime n7d oho
{
	int n;

	n = 2;
	while (n < nb)
	{
		if (nb%n == 0)
		{
			return(0);
		}
		n++;
	}
	return(1);
}
int ft_find_next_prime(int nb)
{
	if(nb <= 1)
	{
		return(0);
	}
	if (is_nb_prime(nb) == 1)
	{
		return(nb);
	}
	while (is_nb_prime(nb) != 1)
	{
		nb++;	
	}
	return(nb);
	
}
//int main()
//{
	//printf("for 9 :%d \n",ft_find_next_prime(9));
	//printf("for 11 :%d \n",ft_find_next_prime(11));
	//printf("for 0 :%d \n",ft_find_next_prime(0));
	//printf("for 1 :%d \n",ft_find_next_prime(1));
	//printf("for -1 :%d \n",ft_find_next_prime(-1));
	//printf("for 5 :%d \n",ft_find_next_prime(5));
	//printf("for 6 :%d \n",ft_find_next_prime(6));
//}
