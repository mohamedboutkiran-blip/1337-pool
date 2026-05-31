#include<stdio.h>
int ft_strlen(char *str) // bach an7asb tighzi
{
	int length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return(length);
}
int ft_check_base(char *str) // bach anzr is t3dl lbase 
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return(0);
	while (str[i]){
		if ((str[i] >= 9 && str[i] <= 13)||(str[i] == 32)||(str[i] == '-' || str[i] == '+'))
		return(0);
		j = i+1;
		while (str[j]){
			if (str[i] == str[j])
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}
int ft_print_result(char *str, char *base) // bach ansgada result nft i atoi at ttb3
{
	int i;
	int j;
	int result;
	int len;

	i = 0;
	result = 0;
	len = ft_strlen(base);
	while (str[i])
	{
		j = 0;
		while(base[j] && str[i] != base[j])
		{
			j++;
		}
		if(base[j] == '\0')
		{
			return(result);
		}
		result = result * len + j;
		i++;
	}
	return(result);
}
int ft_atoi_base(char *str, char *base)
{
	int i;
	int signe_count;
	int signe;
	int result;

	i = 0;
	signe_count = 0;
	signe = 1;
	if (ft_check_base(base) != 1){
		return(0);
	}
	while (((str)&&(str[i] >= 9 && str[i] <= 13))||(str[i] == 32)) {
		i++; // nskipi l wahitspaces
	}
	while (str[i] && (str[i] == '+' || str[i] == '-')){
		if(str[i] == '-'){
			signe_count++; //n7sb l3adad n na9isat nkhznt 7 signe_count
		}
		i++;}
	if (signe_count % 2 != 0)
		signe = -1;
	str = str + i;
	result = ft_print_result(str, base);
	return(result*signe);
}

int main()
{
	int x = ft_atoi_base("111111111111111111111111111111111111111111111111111111111111", "01");
	printf("%d \n", x);
}