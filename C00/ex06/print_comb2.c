void ft_print_comb2(void);

int main ()
{
    ft_print_comb2();
	return 0;
}

void ft_print_comb2(void)
{
    char first;
	char second;

	first = 0;
	second = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if ((first / 10 != 9) || (first % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}