#include <stdio.h>
int main()
{
	int n, x, y, a, b, i;
	scanf("%d", &n);//num of test case
	for(i=0; i<n; i++)
	{
		scanf("%d%d", &x, &y);//num of heads & feet
		if(y<2*x||y>4*x||y%2!=0||x<=0||y<=0)
		  printf("error\n");
		else
		{
			b = y/2 - x;
			a = 2*x - y/2;//calculating chick&rabbits
			printf("%d %d\n", a, b);
		}
	}
	return 0;
}
