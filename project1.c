#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int pre, trans;
	printf("다음단위에서[변환할단위] --> [변환결과단위]로연산합니다.\n");
	printf("\n [1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop) \n");
	printf("\n[이전단위] --> [변환단위], 두개의메뉴번호를선택하세요. >> ");
	scanf("%d %d", &pre, &trans);

	double input = 0.1;
	while (pre && trans && input)
	{
		if (pre >= 5 || pre < 0 || trans >= 5 || trans < 0)
		{
			printf("숫자를 확인하고 다시선택해주세요.\n");
			continue;
		}

		printf("\n[변환할단위]의길이를입력하세요. >> ");
		scanf("%lf", &input);
		if (input == 0) break;

			switch (pre) {
			case 1:
				printf("\n [결과]  %.2f(미터) -->", input);
				if (trans == 1)
					printf("%.2f(미터)\n", input);
				else if (trans == 2)
					printf("%.2f(인치)\n", 39.370079 * input);
				else if (trans == 3)
					printf("%.2f(피트)\n", 3.28084 * input);
				else if (trans == 4)
					printf("%.2f(야드)\n", 1.093613 * input);
				break;

			case 2:
				printf("\n [결과] %.2f(인치) -->", input);
				if (trans == 1)
					printf("%.2f(미터)\n", 0.0254 * input);
				else if (trans == 2)
					printf("%.2f(인치)\n", input);
				else if (trans == 3)
					printf("%.2f(피트)\n", 0.083333 * input);
				else if (trans == 4)
					printf("%.2f(야드)\n", 0.027778 * input);
				break;

			case 3:
				printf("\n [결과] %.2f(피트) -->", input);
				if (trans == 1)
					printf("%.2f(미터)\n", 0.3848 * input);
				else if (trans == 2)
					printf("%.2f(인치)\n", 12 * input);
				else if (trans == 3)
					printf("%.2f(피트)\n", input);
				else if (trans == 4)
					printf("%.2f(야드)\n", 0.3333 * input);
				break;

			case 4:
				printf("\n [결과] %.2f(야드) -->", input);
				if (trans == 1)
					printf("%.2f(미터)\n", 0.9144 * input);
				else if (trans == 2)
					printf("%.2f(인치)\n", 36 * input);
				else if (trans == 3)
					printf("%.2f(피트)\n", 3 * input);
				else if (trans == 4)
					printf("%.2f(야드)\n", input);
				break;
			}
	};

	printf("\n프로그램을 종료합니다.\n");

	return 0;
}