#include<unistd.h>
void ft_print_reverse_alphabet(void)
{
short	c=122;
	while(c >= 97)
	{
		write(1, &c, 1);
		--c;
	}

}
int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}
