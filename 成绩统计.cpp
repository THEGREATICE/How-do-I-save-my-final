#include <stdio.h>
int main()
{
	int n, a, b, c, i;
	float avg;
	char id[20];
	scanf("%d", &n);
	char av[n];
	for(i=1; i<=n; i++)
	{
		scanf("%c", &id[i]);
		scanf("%d%d%d", &a, &b, &c);
		avg = (a+b+c)/3.0;
		av[i] = avg;
		printf("%.2f\n", avg);	
	}
	
	return 0;
}
