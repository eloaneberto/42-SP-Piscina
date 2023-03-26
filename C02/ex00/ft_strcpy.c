#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
    char one[] = "Eloane";
	char two[] = "Eloane";
	
    ft_strcpy(one, two);

	printf("%s\n", two);
	
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{

	int c = 0;
	
	while ((src[c] != '\0') && (dest[c] != '\0'))
	{
		dest[c] = src[c];
		c++;
	}
}