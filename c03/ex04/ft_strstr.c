#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
	char *p1;
	char *p2;

	if(*to_find == '\0')
	{
		return (str);
	}
	
	while(*str)
	{
		p1 = str;
		p2 = to_find;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1 ++;
			p2 ++;
		}
		if(*p2 == '\0')
		{
			return(str);
		}
		str ++;
	}
	
	return(NULL);
}

int main()
{
	char *string = ft_strstr("HELLO-WORLED","R");
	char *string1 = ft_strstr("HELLO-WORLED","");
	char *string2 = ft_strstr("","R");
	char *string3 = ft_strstr("HELLO-WORLED","n");
	printf("%s \n", string);
	printf("%s \n", string1);
	printf("%s \n", string2);
	printf("%s \n", string3);
}