#include <stdlib.h>
#include "5_head.h"  

int main (void)
{
	int n;
	int *arr;
	int i;
	printf ("enter N: \n");
	if (scanf("%d", &n) != 1)
	{
		printf ("Enter error\n");
		return -1;
	}
	if (n < 0)
	{
		printf ("N can't be <0\n");
		return 0;
	}
	arr = (int *)malloc((n+1) * sizeof(int));
	for (i = 0; i < n + 1; i++) 
	{
		if (i == 0)
		{
			arr[i] = 1;
		} 
		else
		{
			arr[i] = 0;
		}
	}
func(arr, n + 1);
print_arr(arr, n+1);
free(arr);
return 0;	
}
