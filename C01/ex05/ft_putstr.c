#include <unistd.h>

void ft_putstr(char *str);

int main ()
{
  	char str[] = "Hello, world!";

	ft_putstr(str);  
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}