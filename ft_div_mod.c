#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)   //if b!=0
	{
		*div = a / b;
		*mod = a % b;
	}

}
int main()
{
	int	div, mod, n, n1;

	n = 42;
	n1 = 21;

	ft_div_mod(n, n1, &div, &mod);
	//not the adress of div and mod but the var them self.
	printf("\n%d/%d = %d with reminder %d\n\n", n, n1, div, mod);
}
