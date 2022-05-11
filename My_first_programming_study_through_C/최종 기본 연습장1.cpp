#include <stdio.h>
#include <limits.h>
#define months 12
int main (void)
{
	int x = 20;
	    x = 30;    
	printf("%d\n",x);
	printf("%d\n",sizeof x);
	
	int y = INT_MAX;
	printf("인트형의 최댓값 = %d\n",y);
	printf("인트형의 최솟값 = %d\n",y+1);
	printf("%d\n",sizeof y);
	
	float z = 123456.123456;
	printf("%.2f\n",z);
	double a = 123456.123456;
	printf("%.6f\n",a);
	
	int b = 10;
	int c = 20;
	printf("b 더하기 c는 ? %d \n",b+c);
	printf("b  빼기  c는 ? %d \n",b-c);
	printf("b 곱하기 c는 ? %d \n",b*c);
	printf("b 나누기 c는 ? %d \n",b/c);
	printf("b 나누기 c에 나머지는 ? %d \n",b%c); 
	
	double money = 900.0;
	printf("money x 12 = %.1f\n",money * months);
	
	char d ='l';
	char e ='o';
	char f ='v';
	char g ='e';
	printf("%C%C%C%C\n",d,e,f,g);
	printf("%d %d %d %d\n",d,e,f,g);
	
	int h = 108;
	int i = 111;
	int j = 118;
	int	k = 101;
	printf("%C%C%C%C\n",h,i,j,k);
	
	int l =100;
	printf("100을 10진수로 표현하면 %d\n",l);
	printf("100을  8진수로 표현하면 %x\n",l);
	printf("100을 16진수로 표현하면 %o\n",l);
	
	return 0;
}
 
