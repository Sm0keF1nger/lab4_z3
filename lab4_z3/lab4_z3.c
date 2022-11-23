#include <stdio.h>


int main()
{
	int j , i, x, n, sum = 0, sum2 = 0;
	
	printf_s("insert n: ");
	scanf_s("%d", &n);

	printf_s("insert x: ");
	scanf_s("%d", &x);
	
		

	
	for (int i = 1; i <= n; i++)
	{
		
		for (j = 2; j <= n; j++)
		{
			sum += x + j;
		}

		
		
	} 
	
	printf_s("sum = %d\n", sum);
	
}


