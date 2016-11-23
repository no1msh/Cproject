#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data;
	printf("\n �������ϳ��Է��ϼ���. >> ");
	scanf("%d", &data);

	while (data)
	{
		printf("\n\t������: ");
		for (int c = 31; c >= 0; c--)
			printf("%c", ((data >> c) & 1) ? '1' : '0');
		printf("\n");

		printf("\n\t������: ");
		int temp = data;
		int octal = 0;
		int i = 1;
		while (temp)
		{
			int rem = temp % 8;
			temp /= 8;
			octal += rem * i;
			i *= 10;
		}
		printf("%32d", octal);
		printf("%8o\n", data);

		int digits = 1;
		temp = data;
		while (temp /= 16)
			digits++;

		temp = data;
		printf("\n\t16����: ");

		int devider = 1;
		for (int i = 1; i < digits; i++)
			devider *= 16;

		printf("%*s", 32 - digits, " ");
		while (digits)
		{
			int out = temp / devider;
			if (out < 10)
				printf("%d", out);
			else
				printf("%c", out + 55);

			temp -= devider * out;;
			devider /= 16;
			digits--;
		}
		printf("%8X\n", data);
		printf("\n");

		printf("\n �������ϳ��Է��ϼ���. >> ");
		scanf("%d", &data);
	}
	printf("�����մϴ�.\n");

	return 0;
}