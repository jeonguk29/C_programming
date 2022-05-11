// 동적 메모리를 간단하게 할당하여 사용해보고 반환 합니다. 
#include <stdio.h>
#include <stdlib.h> // 동적 메모리를 사용하기위해서 필수적으로 넣어주어야 하는 라이브러리  
int main (void)
{
	int *pi;// pointer Integer
	pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당해라.  크기를 지정 하는 부분 == sizeof(int) 대신에 4 넣어도 상관 없음 int가 4바이트라  malloc(4);
	// 할당을 하면 그부분의 주소를 가리켜 줌 (int *) 이렇게 인트 포인트로 형변환을 해주고 인트 포인터 변수 pi가 그위치를 기억 하도록 하는 것임  
	if(pi == NULL) 
	{
		printf("동적 메모리 할당에 실패했습니다.\n");  
		exit(1); // 프로그램을 종료함  
	 } 
	*pi = 100; // pi가 가르키고 있는 그 주소의 값에  100을 넣어줌 
	printf("%d\n",*pi);
	// 동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환합니다.
	free(pi); // 수납장과 같음 물건 쓰면 다시 돌려줘야함 다른 사람도 써야되니까  
	//pi 이게 가리키는게  (int *)malloc(sizeof(int)); 이부분이니까 그렇기 때문에 현재 할당된 4바이트 만큼에 메모리를 해지 해주는것임  
	return 0;
}

/*
	int *pi;
	pi = (int *)malloc(sizeof(int));     int * (이러한 형태로 형변환)     <=    할당      | 1| 2| 3| 4| 바이트  
                                         즉 int*위치를 | 1| 2| 3| 4| 바이트로 반환해준다는 것임  int*위치는 |1| 첫번째 위치 = pi는 int* (|1|) 첫번째임  
                                         
    다시 정리하면 (int *)malloc(sizeof(int));  이거 자체가 순식간에  | 1| 2| 3| 4| 바이트 만큼 할당을 해준다음에 그곳에 위치를 가지고있는 것임 
	그렇다면 pi는 할당해준 위치를 기억하라고 하는것임 
	포인터 변수는 자기 자신만으로 의미가 없기 때문에 어떠한 변수의 위치를 기억한다고함  pi = 할당된 인트형 변수의 메모리 위치,주소를 가져오는것임 
	
	즉 나중에 pi를 이용해서 해당 주소에 접근해 할당된 인트형 변수의 값을 바꿀수도 있고 각각의 처리를 할수 있는것임   이런식으로 운영이 되는것이 
	동적 메모리 할당이라고 하는것임  
*/
