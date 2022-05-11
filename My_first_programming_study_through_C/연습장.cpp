#include <stdio.h>
#include <limits.h>
#define todayfood 3 
#define SECOND_POR_MINUTE 60
int main (void)
{
	int x= 500;
	int y= INT_MAX;
	int a= 10;
	int b= 20 ;
	double z= 123456789.1234567;
	printf("변수 x에 메모리크기는? %d 입니다.\n" ,sizeof x);
	printf("변수 x에 값은? %d 입니다.\n", x);
	printf("변수 z를 소수점 3번째자리 까지 까지 출력하면 %.3f\n", z);
	printf("변수 y에 최댓값은 %d입니다.\n", y);
	printf("변수 y에 최댓값에서 1을 더하면 %d입니다.\n", y+1);
	printf("변수 a-b 값은? %d 입니다.\n", a-b);
	printf("변수 a+b 값은? %d 입니다.\n", a+b);
	printf("변수 a*b 값은? %d 입니다.\n", a*b);
    printf("변수 a/b 값은? %d 입니다.\n", a/b);
	///////////////////////////////////////////////////////

	double calorie = 1000.3;
	printf("todaycalorie%.2f\n",todayfood*calorie);
	
	char q='g';
	char w='u';
	char e='c';
	char r='c';
	char t='l';
	printf("%c",q);
	printf("%c",w);
	printf("%c",e);
	printf("%c",r);
	printf("%c\n",t);
	
	int d= 100;
	char f= 'f';
	printf("%c\n",d);
	printf("%d\n",f);
	printf("10진수로 출력: %d\n",d);
    printf("8진수로 출력: %o\n",d);
	printf("16진수로 출력: %x\n",d);
	
///////////////////////////////////////////////////////////////////////////////

	
	return 0;
}
