#include <stdio.h>
#include <limits.h>
#define months 12
int main (void)
{
	// 자료형의 연산  
	int x = 10;
	int y = 20;
	
	printf("x + y = %d\n",x+y);
	printf("x - y = %d\n",x-y);
	printf("x * y = %d\n",x*y);
	printf("x / y = %d\n",x/y);
	printf("x % y = %d\n",x%y);
	
	// 오버 플로우의 개념  
	int a = INT_MAX;
	int b = INT_MIN;
	
	printf("%d  a+1 = %d\n",a,a+1);
	printf("%d  b-1 = %d\n",b,b-1);
	
	// 상수를 이용한 연봉 계산  
	double my_mon = 850.5;
	printf("%.2f\n",my_mon*months);
	
	
	// 자료형의 따른 메모리의 저장공간 할당  
    int c = 67;
    char d;
    float e;
    double f;
    printf("int의 저장 공간 크키는 = %d %d\n",sizeof c,sizeof c);
    printf("char의 저장 공간 크키는 = %d \n",sizeof d);
    printf("float의 저장 공간 크키는 = %d \n",sizeof e);
    printf("double의 저장 공간 크키는 = %d \n",sizeof f);
	
	
	// char 자료형 특징 아스키 코드로 되어 있음 자유롭게 사용 가능  
	char q = 'A';
	printf("%c  %d \n",q,q );
	char w = 'B';
	printf("%c  %d \n",w,w );
	printf("%c  %d \n",c,c);
	
	
	// 출력 양식의 따라 다양한 진법으로 변환 가능  
	int r = 100;
	printf("%d 10진수 표기\n",r);
	printf("%x 16진수 표기\n",r);
	printf("%o 8진수 표기\n",r);
	
	
	
	return 0;
}
