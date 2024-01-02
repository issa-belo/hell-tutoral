#include<stdio.h>
#include<stdlib.h> //randome numbers

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b)
	{
		tmp = *a / *b;
		*b = tmp % *b;
	}
}

int main()
{
	int a, b;

	for (int i=0; i<10; i++)
	{
		//random numbers:
		a = rand()%101;
		b= rand()%10+1;
		printf("a=%d b=%d\n",a, b);
		printf("quatient=%d module=%d\n",a/b, a/b);
		ft_ultimate_div_mod(&a, &b);
		printf("-----from my func-----\n");
		printf("quotient=%d module=%d\n\n",a, b);
	}
}
