#include <stdio.h>
int main(void)
{
	int n;
	int x;

	n = 110;
	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d, ", x);
		}
	}else if (n > 98)
	{
		for (x = n; x >=98; x--)
		{
			printf("%d, ", x);
		}
	}
		putchar('\n');
		return (0);
}
