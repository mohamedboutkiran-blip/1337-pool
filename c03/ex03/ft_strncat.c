//#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

//int main()
//{
    //char string[100] = "Hello -";
    //ft_strncat(string, "-WORLED",5);
    //printf("%s \n", string);
//}