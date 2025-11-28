#include<stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < 'a' || str[i] > 'z')
        {
            return 0;
        }
		i++;
    }
    if(str[i] == '\0')
    {
        return 1;
    }
    return 0;
}
