#include <stdio.h>
#include <stdlib.h>

/* 이렇게 구조체와 포인터를 이용한 동적 메모리를 한꺼번에 쓰고 이렇게 사용자 정의 함수 까지 활용을 해서 지금 까지 c언어 에서 배웠던 모든 문법이 이안에 들어가 있다고 할수 
  있음 이 프로그램을 이해한다면 c언어 기본적인 문법은 다 떈 것임  
*/ 
  
struct Book
{
	int number; // 책 번호  
	char title[100]; // 책 제목  
	
};

void showBook(struct Book *p, int n) // 책의 모든 정보를 출력하는 함수  n은 책의 개수  struct Book *p 북이라는 구조체를 동적 메모리 할당한 포인터 변수 자체를 넣어준것  
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("번호 %d : %s\n",(p + i)->number,(p + i)->title);
	}
	
}
int main (void)
{
	struct Book *p; // 구조체 동적 메모리 할당  
	p = (struct Book *)malloc(2 * sizeof(struct Book ));// 총 2개의 구조체 변수가 들어 갈수 있을 만큼 메모리를 할당 해줌  
	if(p == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	// 지금 까지 구조체 변수에 특정한 속성 값 즉 특정한 내부 변수값에 접근 하기 위해서는 p.을 .찍어서 접근을 했었는데 
	p -> number = 1;  // 구조체 포인터 같은 경우는 이렇게 화살표 모양을 만들어서 접근 할수가 있음  즉 p에 해당하는 구조체에 넘버라는 변수에 1을 넣어줌  
	strcpy(p->title,"C Programming"); // 그다음 이렇게 p라는 구조체에 타이틀이라는 값 또한 이렇게 초기화 함   
	
	(p + 1)->number =2; // p가 가르키는것은 | 0| 첫번째 구조체 변수에 해당하는 거고 p+1은 두번째 구조체 변수에 해당하는 것임  
	strcpy((p + 1)->title,"Data Structure");
    // 각각의 구조체 변수의 값이 다 들어감 
	 
	showBook(p, 2);
	free(p); // 모든 프로그램이 작동을 완료하고 끝날때 동적 메모리 할당을 해지 해줌  
	
	return 0;
}
