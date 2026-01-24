//#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if(s1[i] > s2[i])
        {
            return(s1[i] - s2[i]);
        }
        if(s1[i] < s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    if(i == n)
    {
        return (0);
    }
    return(s1[i] - s2[i]);
}

//int main()
//{
    //int x = ft_strncmp("1234567","123456",3);
    //printf("%d \n", x);
//}