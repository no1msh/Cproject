#include <stdio.h>

int main(void)
{
	int row = 10;
	int out = 2;

	for (int i = 0; i < row; i++)
	{
		int c;
		for (c = 0; c <= (row - i); c++)
			printf("  ");

		int devider;
		for (c = 0; c <= i; c++)
		{
			while (1) {
				for (devider = 2; devider <= out - 1; devider++)
				{
					if (out % devider == 0)
						break;
				}
				if (out++ == devider)
				{
					printf("%3d ", out - 1);
					break;
				}
			}
		}
		printf("\n");
	}
}