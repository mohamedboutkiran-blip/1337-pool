//#include<stdio.h>
unsigned int ft_strlen(char *dest)
{
	unsigned int length = 0;
	
	while(dest[length] != '\0')
	{
		length++;
	}
	return(length);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int the_end_of_dest = 0;
	unsigned int dest_len = ft_strlen(dest);
	unsigned int src_len = ft_strlen(src);
	unsigned int i = 0;
	
	while(dest[the_end_of_dest] != '\0')
	{
		the_end_of_dest++;
	}
	if(size <= dest_len)
	{
		return(src_len+size);
	}
	while(src[i] != '\0' && the_end_of_dest < size - 1 )
	{
		dest[the_end_of_dest] = src[i];
		i++;
		the_end_of_dest++;
	}
	dest[the_end_of_dest] = '\0';
	return(dest_len+src_len);
}

//int main()
//{
	//char destination[100] = "hello-_-";
	//unsigned int s = ft_strlcat(destination ,"worled-[]-",10);
	//printf("%s \n", destination);
	//printf("%d \n", s);
//}
