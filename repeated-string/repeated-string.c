#include <stdio.h>
#include <string.h>

int aCounter(char *s, int len)
{
	int a;
	
	a = 0;    
	while(len--)
	{
		if (*s == 'a')
			++a;
		++s;    
	}
	return (a);
}

long repeatedString(char* s, long n)
{
	int len;
	int a;
	long result;

	len = strlen(s);
	a = aCounter(s, len);
	result = (n / len) * a;
	result += aCounter(s, n % len);
	return (result);
}

int main(void)
{
	char	*s;
	long	n;

	s = "a";
	n = 1000000000000;
	printf("%ld\n", repeatedString(s, n));
	return (0);
}
