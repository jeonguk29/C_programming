#include <stdio.h>
int main (void)
{
	int x = 65; /// 여기에 숫자 65를 넣어도 a가 나오는데 그이유는 내부적으로 65라는 뜻을가지고 있기 떄문인데 이게바로 아스키 코드라고 함 
	printf("%c\n",x);
	char y = 65;
    printf("%c\n",y);
	char z = 'B';
    printf("%d\n",z);
    printf("%c\n",z);
	
	return 0;
}
