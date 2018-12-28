#include <stdio.h>
int main()
{
	int x, i, k, n=1;
	float m = 0.1;
	int ans[10];
	int re[10];
	int ne[10]; 
	scanf("%d", &x);
	for(i=1; i<10; i++)
	{
		n = n*10;
		ans[i] = x/n;
		re[i] = x - ans[i]*n;
		x = x - re[i];
		if(ans[i]==0)
		break;	
	}
	printf("%d\n", i);
	for(k=1; k<=i; k++)
	{
		m = m*10;
		ne[k] = re[k]/m;
	}
	for(k=i; k>0; k--)
	{
		printf("%d ", ne[k]);
	}
	printf("\n");
	for(k=1; k<=i; k++)
	{
		printf("%d ", ne[k]);
	}
	return 0;
 } 
