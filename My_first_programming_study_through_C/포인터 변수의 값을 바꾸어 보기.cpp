#include <stdio.h>
int main (void)
{
	int i=10;
	int *p; // 이렇게 포인터 변수를 선언해주고  그냥 int *p=&i; 이렇게 해줘도 됨 보기쉽게 
	p=&i; // 포인터 p가 가르키는 주소를 변수 i의 주소로 해준뒤 초기화 해줌 즉 포인터 p는 10임  밑에 주소를 연결할때는 * 안붙힘  
	printf("i = %d\n",i); // 그래서  이렇게 출력할때는 i =10 그대로 출력이 되지만   
	*p = 20;  // 이 포인터 p가 가르키고 있는 주소에 20을 넣어주면(바꿔주면) 수를 엏러줄때는 * 붙임  
	printf("i = %d\n",i); // i는 20으로 출력이됨  
   
	// 이런식으로 포인터를 이용하면 정말 가지각색에 변수 활용이 가능함 이렇게 포인터를 배워본것을 정확하게 숙지하면 포인터에대한
	// 전번적인 개념이해는 됫다고 할수있고 확실하게 이해만 한다면 정말 다양한 프로그래밍 기법들을 응용할수 있을것임  
	
	return 0;
}
