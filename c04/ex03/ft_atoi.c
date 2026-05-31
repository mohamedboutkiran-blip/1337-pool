//#include<stdio.h>
int ft_atoi(char *str){
    int i;
    int signe;
    int signe_count;
    int result;

    i = 0;
    signe_count = 0;
    signe = 1;
    result = 0;
    while ((str[i] != '\0' && str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {
        if(str[i] == '-')
        {
            signe_count++;
        }
        i++;
    }
    if(signe_count % 2 != 0)
    {
        signe = -1;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 +(str[i] - '0');
        i++;
    }
    return (signe*result);
}

//int main()
//{
    //int x = ft_atoi("  \n\t--+-+--1002ascii99");
    //printf("%d \n", x);
//}
