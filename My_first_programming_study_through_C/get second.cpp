#include <stdio.h>
#define SECOND_POR_MINUTE 60
int main (void)
{
	int input =1000 ;
	int minute= input / SECOND_POR_MINUTE;
	int second= input % SECOND_POR_MINUTE;

    printf("%d�ʴ� %d�� %d�� �Դϴ�.",input ,minute ,second);
	
	return 0;
}
