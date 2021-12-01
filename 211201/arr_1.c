#include <stdio.h>
int main()
{
	int time = 0;
	int max = -101;
	int arr[100];

	for (int i = 1; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);

		if (max < arr[i])
		{
			max = arr[i];
			time = i;
		}
	}
	printf("%d\n", max);
	printf("%d", time);
}