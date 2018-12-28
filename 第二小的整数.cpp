#include <stdio.h>
int main()
{
	int n, m, i, j, x, y, min1, min2;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &m);
		for(j=0; j<m; j++)
		{
			scanf("%d", &x);
			if(j==0)
			  min1=min2=x;
			else if(j==1)
			{
				if(x<=min1)
				{
					min1 = x;
				}
				else
				{
					min2 = x;	
				}				
			}
			else
			{
				if(x<=min1)
			  	  min1 = x;
			  	else
			  	{
			  		if(min1==min2)
			  		{
			  			min2 = x;
					}
					else
					{
						if(x<=min2)
						  min2 = x;
					}	  		
				}
			}			
		}
		if(min1==min2)
		  printf("ERROR\n"); 
		else
		  printf("%d\n", min2);
	}
	return 0;
}
