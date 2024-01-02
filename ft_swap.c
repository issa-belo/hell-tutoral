#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int	a, b;

	a = 42;
	b = 21;
	printf("befor\n %d %d\n",a, b);
	ft_swap(&a, &b);
	printf("after\n %d %d\n", a, b);

}

