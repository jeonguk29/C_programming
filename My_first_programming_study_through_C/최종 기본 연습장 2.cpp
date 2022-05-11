#include <stdio.h>
#define second_por_minute 60 
#include <math.h>
int main (void)
{
	int input = 1000;
	int minute = input/second_por_minute; 
	int second = input%second_por_minute;
	printf("1000초는 %d 분 %d 초 입니다.\n",minute,second);
	
	int x = 0;
	printf("현재 x의 값은? %d 입니다.\n",x); 
	printf("현재 x의 값은? %d 입니다.\n",x++); 
	printf("현재 x의 값은? %d 입니다.\n",x); 
	printf("현재 x의 값은? %d 입니다.\n",++x); 
	printf("현재 x의 값은? %d 입니다.\n",x+10); 
	
	
	int y =50;
	printf("y의 값은? %d 입니다.\n",y);
	y+=50;
	printf("y의 값은? %d 입니다.\n",y);
	y-=50;
	printf("y의 값은? %d 입니다.\n",y);
	y*=50;
	printf("y의 값은? %d 입니다.\n",y);
	y/=50;
	printf("y의 값은? %d 입니다.\n",y);
	y%=50;  
	printf("y의 값은? %d 입니다.\n",y);
	
	int a =100;
	int b =200;
	printf("a와 b는 값이 같은가? %d\n",a==b);
	printf("a와 b는 값이 다른가? %d\n",a!=b);
	printf("a는 b보다 값이 큰가? %d\n",a > b);
	printf("a는 b보다 값이 작은가? %d\n",a < b);
	
	printf("a는 b보다 값이 작고 50보다 큰가? %d\n",(a < b) && (a > 50));
	printf("a는 b보다 값이 작고 50보다 작은가? %d\n",(a < b) && (a < 50));
	
	printf("a는 b보다 값이 작지만 50보다는 크다 %d\n",(a < b) || (a > 50));
	printf("b는 a보다 값이 작지만 50보다는 작다 %d\n",(b < a) || (b < 50));
	
	int c = -50;
	int d =  30;
	int absolutex = (c > 0)? c : -c;
	
	int max = (c > d)? c:d ;
	int min = (c < d)? c:d ;
	
	printf("절댓값 %d\n",absolutex);
	printf("최댓값 %d\n",max);
	printf("최솟값 %d\n",min);
	
	double e = pow(2.0,20.0);
	printf("2의 20제곱은? %.0f \n",e);
	
	int f = pow(20,4);
	printf("20의 4제곱은? %d \n",f);
	
	return 0;
}
