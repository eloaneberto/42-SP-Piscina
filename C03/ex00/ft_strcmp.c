#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char i[] = "Eloane";
	char j[] = "Eloane Lais";

	printf("ij: %d, ji: %d", ft_strcmp(i,j), ft_strcmp(j,i));
}

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}