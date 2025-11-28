#include<stdio.h>
int ft_str_is_printable(char *str)
{
    int i = 0;

    if(str[i] == '\0')
    {
        return 1;
    }
    while(str[i] != '\0')
    {
        if(str[i] < 32 || str[i] == 127) //to check non-printable characters.
        {
            return 0;
        }
        i++;
    }
    return 1;
}

//int main()
//{
    //int a = ft_str_is_printable("abcd");
    //int b = ft_str_is_printable("ab\n \0 d");
    //int c = ft_str_is_printable("");
    

    //printf(" %d \n %d \n %d \n ", a, b, c);
//}