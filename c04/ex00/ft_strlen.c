//#include<stdio.h>
int ft_strlen(char *str)
{
    int length;

    length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return(length);
}
//int main()
//{
    //char *string = "Hello_world";
    //int len = ft_strlen(string);
    //printf("%d \n", len);
//}