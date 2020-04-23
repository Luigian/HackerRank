#include <stdio.h>

int	sockMerchant(int n, int* ar)
{
	int     array[101];
	int     i;
	int     result;

	i = 0;
	while (i < 101)
		array[i++] = 0;
	i = 0;
	while (i < n)
		array[ar[i++]] += 1;
	i = 0;
	result = 0;
	while (i < 101)
		result += array[i++] / 2;
	return (result);
}

int	main(void)
{
	int	n;
	int	ar[] = {10, 20, 20, 10, 10, 30, 50, 10, 20}; 

	n = 9;
	printf("%d\n", sockMerchant(n, ar));
	return (0);
}
