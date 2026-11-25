#include <stdlib.h>
#include "5_head.h"

void func(int *arr, int len)
{
	int i, j;
	for (i = 1; i < len; i++)
	{
		for (j = i; j > 0; j--)
		{
			arr[j] = arr[j-1] + arr[j];	
		}
	}
}