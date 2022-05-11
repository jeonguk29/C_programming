#include <stdio.h>
#define SECOND_POR_MINUTE 60
int main (void)
{
	int input =1000 ;
	int minute= input / SECOND_POR_MINUTE;
	int second= input % SECOND_POR_MINUTE;

    printf("%d초는 %d분 %d초 입니다.",input ,minute ,second);
	
	return 0;
}
