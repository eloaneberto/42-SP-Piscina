#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main ()
{
char teste[] = "1234567";

	printf("%d\n", ft_str_is_uppercase(teste));

	return (0);
}

int ft_str_is_uppercase(char *str)
{
    int c = 0;
    
    while (str[c] != '\0')
    {
        if ((str[c] < 'A') || (str[c] > 'Z'))

        return (0);
        c++;
    }
    return (1);
}