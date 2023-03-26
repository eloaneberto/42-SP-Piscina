#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
    int a = 4;
    int b = 2;
    int pdiv = a / b;
    int pmod = a % b;
    int *div = &pdiv;
    int *mod = &pmod;
    
    ft_div_mod(a, b, div, mod);
    
    printf("Div de a e b: %d\n",*div);
    printf("Mod de a e b: %d",*mod);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
	*mod = a % b;
}
