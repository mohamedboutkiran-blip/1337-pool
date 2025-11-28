#include<stdio.h>
 unsigned int ft_strlen (char *src)
{
    unsigned int i;

    i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int len;

    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    len = ft_strlen(src);
    if (size == 0)
    {
        return (len);
    }
    dest[i] = '\0';
    return (len);
}
//int main()
//{
    //char destination[50];
  
	//int a = ft_strlcpy(destination, "1002", 1);
    //int b = ft_strlcpy(destination, "", 3);
    //int c = ft_strlcpy(destination, "1002", 5);
    //int d = ft_strlcpy(destination, "1002alfojoj", 0);

	//printf(" %d \n %d \n %d \n %d \n", a, b, c, d);
	//return(0);
//}