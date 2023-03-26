#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
    char one[] = "Eloane";
	char two[] = "Laiz";
	unsigned int n = 2;
	
    ft_strncpy(one, two, n);

	printf("%s\n", one, two);

	return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	int c = 0;
	
	while ((src[c] != '\0') && (dest[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
}