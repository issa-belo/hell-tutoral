#include <unistd.h>

void func(char b)
{
	write(1, &b, 1);
}
int main(void)
{
	func(122);
}
