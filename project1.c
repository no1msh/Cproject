#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int from, to;
	printf("������������[��ȯ�Ҵ���] --> [��ȯ�������]�ο����մϴ�.\n");
	printf("\n [1] ����(m)  [2] ��ġ(in)  [3] ��Ʈ(ft)  [4] �ߵ�(yd)  [0] ����(stop) \n");
	printf("\n[��������] --> [��ȯ����], �ΰ��Ǹ޴���ȣ�������ϼ���. >> ");
	scanf("%d %d", &from, &to);

	double input = 0.1;
	while (from && to && input)
	{
		if (from >= 5 || from < 0 || to >= 5 || to < 0)
		{
			printf("�߸������߽��ϴ�. �ٽü����ϼ���.\n");
			continue
		}

		printf("\n[��ȯ�Ҵ���]�Ǳ��̸��Է��ϼ���. >> ");
		scanf("%lf", &input);
		if (input == 0) break

			switch (from) {
			case 1:
				printf("\n [���]  %.2f(����) -->", input);
				if (to == 1)
					printf("%.2f(����)\n", input);
				else if (to == 2)
					printf("%.2f(��ġ)\n", 39.370079 * input);
				else if (to == 3)
					printf("%.2f(��Ʈ)\n", 3.28084 * input);
				else if (to == 4)
					printf("%.2f(�ߵ�)\n", 1.093613 * input);
				break

			case 2:
				printf("\n [���] %.2f(��ġ) -->", input);
				if (to == 1)
					printf("%.2f(����)\n", 0.0254 * input);
				else if (to == 2)
					printf("%.2f(��ġ)\n", input);
				else if (to == 3)
					printf("%.2f(��Ʈ)\n", 0.083333 * input);
				else if (to == 4)
					printf("%.2f(�ߵ�)\n", 0.027778 * input);
				break

			case 3:
				printf("\n [���] %.2f(��Ʈ) -->", input);
				if (to == 1)
					printf("%.2f(����)\n", 0.3848 * input);
				else if (to == 2)
					printf("%.2f(��ġ)\n", 12 * input);
				else if (to == 3)
					printf("%.2f(��Ʈ)\n", input);
				else if (to == 4)
					printf("%.2f(�ߵ�)\n", 0.3333 * input);
				break

			case 4:
				printf("\n [���] %.2f(�ߵ�) -->", input);
				if (to == 1)
					printf("%.2f(����)\n", 0.9144 * input);
				else if (to == 2)
					printf("%.2f(��ġ)\n", 36 * input);
				else if (to == 3)
					printf("%.2f(��Ʈ)\n", 3 * input);
				else if (to == 4)
					printf("%.2f(�ߵ�)\n", input);
				break
			}
	};

	printf("\n�����մϴ�.\n");

	return 0;
}