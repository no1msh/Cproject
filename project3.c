#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int select;

	printf("��ȯ�ҵ��������Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);
	printf("�Է��ѵμ�: x = %d and y = %d\n", x, y);

	printf("\n �ӽ��������   �̿���[1]");
	printf("\n ��������������  ��ȯ���[2]");
	printf("\n ���������������α�ȯ���[3]");
	printf("\n XOR ������^      �̿���[4]\n");

	printf("\n����ȯ������ѹ�ȣ�������ϼ���. >> ");
	scanf("%d", &select);

	int dump;
	switch (select)
	{
	case 1:
		dump = x;
		x = y;
		y = dump;
		break;

	case 2:
		x = x + y;
		y = x - y;
		x = x - y;
		break;

	case 3:
		x = x * y;
		y = x / y;
		x = x / y;
		break;

	case 4:
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
		break;

	default:
		printf("1, 2, 3, 4 �߿����ٽü����ϼ���.\n");
	}

	printf("\n��ȯ�ѵμ�: x = %d and y = %d\n", x, y);

	return 0;
}