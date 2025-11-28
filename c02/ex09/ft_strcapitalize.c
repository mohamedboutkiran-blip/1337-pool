#include<stdio.h>
char *ft_strlowcase(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}
char *ft_strcapitalize(char *str)
{
	int i = 0;

	ft_strlowcase(str);
	while(str[i] != '\0')
	{
		if(((i == 0)||!((str[i-1] >= 'a' && str[i-1] <= 'z')
		||(str[i-1] >= 'A' && str[i-1] <= 'Z')
		||(str[i-1] >= '0' && str[i-1] <= '9'))) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}

//int main()
//{

	//char str1[500] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"; //Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
	//ft_strcapitalize(str1);
	//printf("%s \n", str1);
//}