#include <stdio.h>

struct point {
	int x;
	int y;
	
};

void comparepoint(struct point p1,struct point p2)// 함수는 입력받는 자료형을 써줘야 하기 때문에 이렇게 써준것임  
{
	if((p1.x == p2.x) && (p1.y == p2.y))
	{                
		printf("p1과 p2가 같습니다."); 
	}
	
}
int main (void)
{
	struct point p1;
	struct point p2;
	
	p1.x=30;
	p1.y=10;
	
	p2.x=30;
	p2.y=10;
	
	/*
	if(p1 == p2)   // 오류가 나는데 구조체는 아무리 같은 구조체 타입 이라고 하더라고 두개의 변수 자체를 직접비교하는게 불가능함  
	{              // p1과 p2는 그자체로 쓰일수가 없기 때문임  
		printf("p1과 p2가 같습니다.");  
	}
	
	if((p1.x == p2.x) && (p1.y == p2.y))// 이렇게 비교하는게 올바른 판단임 구조체 포인트가 좌표평면 상에서 하나의 점을 의미한다고 했기 때문임 
	{                
		printf("p1과 p2가 같습니다."); 
	}

	1. 구조체 자체는 그대로 비교를 못한다
	2. 각구조체 별로 특징을 잡아서 비교하는 부부늘 만들어 줘야함  
	*/
	
	comparepoint(p1,p2);
	
	 
	return 0;
 } 
