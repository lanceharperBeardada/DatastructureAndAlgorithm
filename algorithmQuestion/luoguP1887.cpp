
#include <stdio.h>
int main()
{
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int d = m / n;
	if (m % n == 0)
		for (int i = 0; i < n; i++)
		{
			printf("%d ", d);
		}
	else
	{
		int c = m % n;
		for (int i = 0; i < (n - m % n); i++)
			printf("%d ", d);
		for (int i = 0; i < c; i++)
			printf("%d ", d + 1);
	}

	return 0;
}