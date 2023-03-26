void ft_swap (int *a, int *b);

int main ()
{
    int pa = 7;
	int pb = 3;
	int *a = &pa;
	int *b = &pb;
	
	ft_swap(a, b);
	printf("i should be 7 and it is : %d\n",*a);
	printf("j should be 3 and it is : %d",*b);
}

void ft_swap (int *a, int *b)
{
    int temp;
    
    temp = *a; // o valor do ponteiro de a é colocado no temp (temp = 7, a = 7)
    *a = *b; // a é igual a b (a = 7, b = 7)
    *b = temp; // então o ponteiro de b é igual a temp, que é o valor de a (b = 7, temp = 7)
}