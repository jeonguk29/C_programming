#include <stdio.h> 
#include <stdlib.h> // 동적 메모리의 필요한 스텐다드 라이브러리 파일을 입력 해주고  
#include <string.h> // strcpy 에서 오류가 나면 이 헤더 파일을 추가 하면 됨  

struct Book // 구조체를 만듬 이름은 북:책으로 지은다음 이렇게 구조체 자료형 북을 하나 선언해준것임  
{
     int number; // 그리고 그속성으로 책의 번호와  
	 char title[100];	// 책의 제목만 북이라는 속성의 넣어줌  
};

void showBook(struct Book *p, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
	}
 } 
int main (void)
{
	struct Book *p; // 이제 이렇게 구조체를 한번 동적 메모리 할당을 해보겠음  
	p = (struct Book *)malloc(2 * sizeof(struct Book)); // 지난시간에는 인트형과 케릭터형만 동적 메모리를 할당해서 사용을 해보았는데요  
	// 이번시간에는 구조체 북에 해당하는 포인터 변수를 만들어서 이렇게 구조체를 할당 밭아서 사용해보려함 위에처럼 해주면 스트럭스 북 * 안에
	// 2개의 상자가 생긴것임  즉 struct Book *  구조체인 북 자료형에 2 * sizeof(struct Book ) 총 2개의 북 구조체 변수가 들어갈수 있는 공간 만큼
	//이렇게 할당을 해줌  그걸 p가 기억함 
	/*      struct book 0  struct book 1  
	p =>    [ number ]       [ number ]
	        [ title  ]       [ title  ]        이와같은 원리  
	*/     
	 
	if(p == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n"); // 그리고 만약에 할당에 실패했다면 다음과같이 메세지를 출력해준다음 
		exit(1);// 프로그램을 종료해줌  
	}
	
	// 그다음 이제 밑에처럼 해줌 지금 까지 구조체 변수에 특정한 속성값 즉 특정한 내부 변수값에 접근을 하기 위해서는 
  //p.number 이렇게 p.점을 찍어서 넘버를 적은다음 접근을 했었죠 하지만 !! 구조체 포인터 같은경우는   
	p->number = 1; // 이렇게 -> 화살표 모양으로 만들어서 해당 변수에 접근할수 있음 
	               // 이런식으로 해서 p에 해당하는 구조체의 넘버라는 변수에 1이라는 값을 넣어준것임  
	strcpy(p->title, "C Programming");// 그다음 이런식으로 p라는 구조체에 타이틀이라는 값 또한 이렇게 초기화해줌 즉 c프로그래밍이라는 말을 구조체안에
	// 넣어준것임 그책에 번호는 1번이고 이런식으로 카피를 이용할수도 있음 오른쪽에 있는것을 왼쪽에 복사함 포인터를 이용해서  
	
	(p + 1)->number = 2; // p+1 이건 지난시간과 동일한것인데 p가 가리키는것은 이렇게 2개의 공간을 만들었을때 첫번째 구조체 변수에 해당하는거고 
	// p+1 은 두번재 구조체 변수에 해당하는거라고 할수가 있음  이렇게 두번재 구조체변수에 2를 넣어주고 그다음에 2버냬 구조체 변수에 타이틀에
	// 데이터 스트럭쳐라고 넣어줌 자료 구조라는 과목 이름임 
	// 자 이렇게 넣어주시면 각각의 구조체 변수에 값들이 들어갔다고 할수가 있는것임  
	strcpy((p + 1)->title, "Date Structure");
	
	showBook(p, 2);
	free(p);
  return 0;
}
