#include <stdio.h>
int main()
{
	int x, y, z, i, j;
	for(i=1; i<10; i++)
	{
		y = i;
		for(j=1; j<10; j++)
		{	
			x = j;
			z = x*y;
			if(x<=y)
			printf("%d*%d=%d ", y, x, z);	
		}
		printf("\n");		
	}
	return 0;
}
