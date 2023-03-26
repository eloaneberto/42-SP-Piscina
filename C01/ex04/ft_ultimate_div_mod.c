#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main ()
{
    int pa = 4;
    int pb = 2;
    int *a = &pa;
    int *b = &pb;
    
    ft_ultimate_div_mod(a, b);
    
    printf("Div de a e b: %d\n",*a);
    printf("Mod de a e b: %d",*b);
}

void ft_ultimate_div_mod(int *a, int *b)
{
    *a = (*a) / (*b);
    *b = (*a) % (*b);
}