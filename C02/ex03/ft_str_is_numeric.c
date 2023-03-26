#include <stdio.h>

int ft_str_is_numeric(char *str);

int main ()
{
char numeric[] = "0123456789";

	printf("%d\n", ft_str_is_numeric(numeric));

	return (0);
}

int ft_str_is_numeric(char *str)
{
    int c = 0;
    
    while (str[c] != '\0')
    {
        if ((str[c] < '0') || (str[c] > '9'))

        return (0);
        c++;
    }
    return (1);
}