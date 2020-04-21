#include <stdio.h>
int main()
{
	int n;
	double sum1, sum2, sum3;
	scanf("%d", &n);
	double n1;
	double n2;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &n1);
		sum1 += n1;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &n2);
		sum2 += n2;
	}
	sum3 = sum1 - sum2;
	double sum;
	sum = (sum1 * 3 - sum2 * 2) / sum3;
	printf("%.6lf", sum);
	return 0;
}