#include <stdio.h>

int ft_str_is_alpha(char *str);

int		main(void)
{
    char teste[] = "Eloane";

	printf("%d", ft_str_is_alpha(teste));

	return (0);
}

 int		ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
	return (0);
		c++;
	}
	return (1);
}