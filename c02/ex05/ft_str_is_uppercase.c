#include<stdio.h>
int ft_str_is_uppercase(char *str)
{
    int i = 0;

    if (str[i] == '\0')
    {
        return 1;
    }
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

//int main()
//{
   // int a = ft_str_is_uppercase("ABCD");
   //int b = ft_str_is_uppercase("AB35EF");
    //int c = ft_str_is_uppercase("abcd");
   // int d = ft_str_is_uppercase("1234");
   // int e = ft_str_is_uppercase("");

    //printf(" %d \n %d \n %d \n %d \n %d \n", a, b, c, d, e);
//}