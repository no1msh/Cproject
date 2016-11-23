#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int select;

	printf("교환할두정수를입력하세요. >> ");
	scanf("%d %d", &x, &y);
	printf("입력한두수: x = %d and y = %d\n", x, y);

	printf("\n 임시저장장소   이용방법[1]");
	printf("\n 덧셈과뺄셈으로  교환방법[2]");
	printf("\n 곱셈과나눗셈으로교환방법[3]");
	printf("\n XOR 연산자^      이용방법[4]\n");

	printf("\n위교환방법중한번호를선택하세요. >> ");
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
		printf("1, 2, 3, 4 중에서다시선택하세요.\n");
	}

	printf("\n교환한두수: x = %d and y = %d\n", x, y);

	return 0;
}