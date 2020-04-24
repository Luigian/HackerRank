#include <stdio.h>

int countingValleys(int n, char* s)
{
	int altitude;
	int valley_counter;
	int i;
	
	altitude = 0;
	valley_counter = 0;
	i = 0;
	while (i < n)
	{
		if (altitude == 0 && s[i] == 'D')
			++valley_counter;
		altitude += s[i] == 'D' ? -1 : 1;
		++i;
	}
	return (valley_counter);
}

int	main(void)
{
	int	n;
	char	*s;

	n = 8;
	s = "UDDDUDUU";
	printf("%d\n", countingValleys(n, s));
	return (0);
}
