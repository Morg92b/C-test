#include <stdio.h>


int main(void)
{
	int n = 0;

	printf ("choose ur number : ");
	scanf("%d", &n);

	if (n == 0)
	{
		printf ("the number is %d", n);
	}
	if (n > 0)
	{
		printf ("the number is positif %d", n);
	}
	if (n < 0)
	{
		printf ("the number is negativ %d", n);
	}
	return (0);
}

