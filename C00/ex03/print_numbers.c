#include <unistd.h>

void print_numbers(void);

int main(void)
{
    print_numbers();
    return (0);
}

void print_numbers(void)
{
char first = '0';

    while(first <= '9')
    {
    write(1, &first, 1);
    first ++;
    }
}