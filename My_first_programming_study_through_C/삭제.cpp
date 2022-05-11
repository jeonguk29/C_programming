
#include <stdio.h> 

int main(void)

{

	int i, num[5];

 

	printf("5개의 수를 입력 받아 역순으로 출력합니다.\n");

	for (i = 0; i<5; i++) {

		printf("%d번째 수를 입력하세요=", i + 1);

		scanf("%d", &num[i]);

	}

	for (i = 4; i >= 0; i--)printf(" %d ->", num[i]);

	for (i = 0; i<5; i++)printf(" %d ->", num[i]);

	return 0;

}

 

