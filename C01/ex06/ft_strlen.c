#include <stdio.h>

int ft_strlen(char *str);

int main ()
{
  	char str[] = "Eloane";
	
	printf("%d", ft_strlen(str));
}

int ft_strlen(char *str)
{
    int c;
    c = 0;
    
	while (str[c] != '\0')
	{
		c++;
	}
	
	return (c);
}