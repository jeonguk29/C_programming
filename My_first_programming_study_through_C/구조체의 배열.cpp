//실질적으로 많은 프로그램에서 실제로 활용되는 방법중 하나라고 할수 있습니다.
// 다양한 자료구조나 다양한 프로젝트를 진행할때 많이 사용되는 방법중의 하나의 방법 
// : 구조체의 배열 (실제로 이렇게 다양한 데이터를 구조체의 배열을 이용해서 관리 하는경우가 아주 일반적임 
#include <stdio.h>
#define SIZE 5  // 우리가 사용해볼 프로그램에서 학생 구조체를 다루게 되는데 그학생의 총명수를 사이즈 5라고 잡고 진행할것임 

struct student{
	int number;
	char name [20]; // 한글이름으로 총 10글자까지 들어갈수 있음 한글과 같은 경우는 한글자당 2개의 2바이트를 차지하기 때문에  
	                // 케릭터 같은 경우는 하나당 1바이트기 때문에 20이라고 할당을 해주면 총 10개의 한글이 들어갈수 있기 때문  
	double grade; // 학점을 의미함  
};

int main (void)
{
	struct student list [SIZE]; // 구조체 자료형의 리스트 배열 크기는 5만큼     이렇게 리스트라는 이름에 구조체 배열을 만듬   
	                          // 어떤 구조체냐면 스트럭스 스튜던트 라는 이름으로 즉 학생 구조체를 이렇게 리스트로 만들어 준것임 
		                      // 즉 우리가 만든 변수명은 리스트 입니다. 
    int i; // 상자 순서를 지정해주는 i를 선언해줌  
	
	//데이터를 넣는부분  
	for(i=0;i<SIZE;i++)// 싸이즈 까지 총 5번 반복적으로 수행 하면서 한명의 학생 학생 마다 그이름과 학번과 학점을 입력 밭을수 있도록 해줌  
	{
	   printf("학번을 입력하세요 : "); // i가 0일 때 즉 리스트[0] 의 넘버, 구조체의 1번째 인덱스에 해당하는 학생의 학번을 입력밭도록 해줌  
	   scanf("%d",&list[i].number);
	   printf("이름을 입력하세요 : ");
	   scanf("%s",&list[i].name);// 문자열을 입력 밭을수 있도록 이렇게 해줌  
	   printf("학점을 입력하세요 : ");
	   scanf("%lf",&list[i].grade); // 더블형 같은경우는 입력 받을때 %lf 로 받는다고 했었음  
	}

/*	 그다음에 이제 이부분이 모두 끝날떄쯤에는 5명의 모든 학생들의 정보가 저장이 되어 있을것임 
	 어디에 저장이 되어 있냐면 이프로그램 상에서 저장이 되어 있는것임  
	 ** 구체적으로 말하자면 우리의 램에 올라가있는 이프로그램에 저장이 되어있는거기 때문에 
	 정확히 램에 학생들의 정보가 일시적으로 저장이 되어 있는것이라고 말할수 있음**  
 list
 |  0 |  1 | 이런식으로 저장이 되는것임 배열안에 왜냐면 리스트 구조체 자료형 안에는 학번 이름 학점의 속성이 있기 때문에 이렇게 입력 밭을수 있는것임 
 {학번{학번
  이름 이름 
  학점 학점 
   }     }
*/
  // 데이터를 출력하는 부분 
   for(i=0;i<SIZE;i++)
   {
   	printf("학번 : %d, 이름 : %s, 학점 : %.1f\n",list[i].number,list[i].name,list[i].grade); // 이렇게 넣어줌 그럼 순서대로 학생에 정보가 순서대로 
   }                                                                                        // 출력이 될것임  
/*
list
 |  0 |  1 | 그럼 다시 이렇게 위에서 배열에 저장되어있는 값이 배열순서를 차례대로 거치면서 안에 있는 값들을 출력하는것임   
 {학번{학번
  이름 이름 
  학점 학점 
   }     }
*/
   	return 0;
} 

/* 이렇게 코드를 짜주면 자기가 원하는 형태로 마음대로 데이터를 넣을수 있을것임
그럼 데이터가 모두 들어가게 되면은 바로 각학생에 대한 정보가 출력이 되는것을 알수가 있음
바로 위와같이 데이터를 넣는 부분과 출력하는 부분이 있기 때문임 

이런식으로 구조체라는 것을 활용하면은 하나의 학생이 가지고 있는 정보: 학번, 이름, 학점에 대한 내용들을 
아주 체계적으로 관리하고 저장하고 다룰수 있게 되는것임 

이런식으로 구조체를 어떨게 활용 하는지에 대해서 알아보았고 실제로 이러한 코드구현 방법이 엄청나게 많이 사용되고  
정말 표준적이라고 할수있는부분 이라고 할수있음 */
