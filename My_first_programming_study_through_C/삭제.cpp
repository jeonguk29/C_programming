
#include <stdio.h> 

int main(void)

{

	int i, num[5];

 

	printf("5���� ���� �Է� �޾� �������� ����մϴ�.\n");

	for (i = 0; i<5; i++) {

		printf("%d��° ���� �Է��ϼ���=", i + 1);

		scanf("%d", &num[i]);

	}

	for (i = 4; i >= 0; i--)printf(" %d ->", num[i]);

	for (i = 0; i<5; i++)printf(" %d ->", num[i]);

	return 0;

}

 

