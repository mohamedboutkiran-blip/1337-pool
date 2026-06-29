//#include<stdio.h>
int ft_sqrt(int nb)
{
	int n;
	int result;

	n = 2;
	if (nb < 0)
	{
		return(0);
	}
	if (nb == 0 || nb == 1)
	{
		return(nb);
	}
	while (n <= nb)
	{
		result = n*n;
		if (result == nb)
		{
			return(n);
		}
		if (result > nb)
		{
			return(0);
		}
		n++;
	}
return(0);	
}
//int main()
//{
	//int x = ft_sqrt(100);
	//printf("%d\n", x);
//}
