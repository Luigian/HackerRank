#include <stdio.h>

int	jumpingOnClouds(int c_count, int* c)
{
	int i;
	int jumps;

	i = 0;
	jumps = 0;
	while (i < c_count - 1)
	{
		if (i < c_count - 2 && c[i + 2] == 0)
			i += 2;
		else
			i += 1;
		++jumps;
	}
	return (jumps);
}

int	main(void)
{
	int	c_count;
	int	c[] = {0, 0, 1, 0, 0, 1, 0};

	c_count = 7;
	printf("%d\n", jumpingOnClouds(c_count, c));
	return (0);
}
