#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)    //antb3
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
int ft_strcmp(char *s1, char *s2)    //an9arn
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i]-s2[i]);
}
void sort_args(int argc, char **argv)    //ansgiddi
{
	int i;
	char *temp;

	i = 1;
	while (i < argc-1)
	{
		if (ft_strcmp(argv[i], argv[i+1]) > 0) // i7 yogr wali zwarn wissin
		{
			temp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = temp;
			i = 0;
		}
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;

	i = 1;
	sort_args(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
	}
}
