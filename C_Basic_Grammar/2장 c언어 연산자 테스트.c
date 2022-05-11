#include <stdio.h>
#include <math.h>
#define scond_per_minute 60
int main (void)
{
	int input = 1000;
	int minute = input / scond_per_minute;
	int second = input % scond_per_minute;
	
	printf("%d초 = %d분 %d초\n",input, minute, second);
	
	// 증감 연산자  
	int a =0;
	printf("%d \n",a);
	a++;                 // 앞에 붇어 있는가 뒤에 붇어 있는가 중요 포인트임 
	printf("%d \n",a);
	printf("%d \n",a++);
	printf("%d \n",a);
	--a;
	printf("%d \n",a);
	printf("%d \n",--a);
	
    // 복합 대입 연산자 
    int x = 100;
    printf("%d \n",x);
	x += 50;
	printf("%d \n",x); 
	x -= 50;
	printf("%d \n",x);
	x *= 50;
	printf("%d \n",x);
	x /= 50;
	printf("%d \n",x);
	x %= 3;
	printf("%d \n",x);
	
	// 관계 연산자 
	int y = 50, w = 30;
	printf("y가 w와 같은가? %d \n",y==w); 
	printf("y가 w와 다른가? %d \n",y!=w);
	printf("y가 w보다 큰가? %d \n",y>w);
	printf("y가 w보다 작은가? %d \n",y<w); 
	printf("y에 w값을 넣으면? %d \n",y=w);  // 항상 왼쪽 기준임   (y=w) 이렇게 수식으로 되있어도 왼쪽에 넣고 y의 값이 빠져나옴  
	
	
	// 논리 연산자 
	int num1 = 50 , num2 = 30;
	printf("num1이 num2보다 크고 num2는 40미만입니까? %d \n", (num1 > num2) && (num2 < 40));   // and
	printf("num1이 num2보다 작거나 혹은 num2는 30입니까? %d \n", (num1 < num2) || (num2 == 30)); // or
	printf("num1이 50이 아닙니까? %d \n", num1 != 50); // not 
	
	
	// 조건 연산자 
	int num3 =-50, num4 =30;
	int absolute_num3 = (num3 > 0) ? num3 : -num3;  // 항상 왼쪽 기준    조건이 참이면 왼쪽 그렇지 않으면 오른쪽  
	int absolute_num4 = (num4 > 0) ? num4 : -num4;
	int MAX = (num3 > num4) ? num3 : num4; 
	int MIN = (num3 < num4) ? num3 : num4; 
    
	printf("num3의 절댓값 = %d \n",absolute_num3);	
	printf("num4의 절댓값 = %d \n",absolute_num4); 
	printf("num3와 num4중 최댓값 = %d \n",MAX);
	printf("num3와 num4중 최솟값 = %d \n",MIN);
			
	
	//pow 함수 () 있으면 다 함수임 power 파워의 약자 
	
	double num5 = pow(2.0, 20.0); 
	printf("2의 20제곱은 %.0f입니다. \n",num5); // 2의 20제곱을 소수점 자리없이 정수형의 형태로 출력하라고 해주는것 (%.2f는 소숫점 2번째 자리까지 출력 하라는것임)  
	
	
	
	
	
	 
	
	
	
	return 0;
 }  
