#include <stdio.h>

int getDays(int month,int day)// 매개변수에서 int 하고 띄어주어야함  지금이 매개변수는 무슨달 ,무슨날 인지 입력밭을 매개변수임   
{
int i, sum=0; // 이렇게 i와 sum을 선언해서(함수 안에서 선언해야함) sum은 0으로 값을 지정해주고 i는 밑에서 1로 지정해주느다 1년은 1월달 부터 시작이라 
for(i=1;i<month;i++) // i는 1부터 시작해서 month에 도달할때까지 아이를 1씩 더하면서 반복해나감  
                    // 3월 1일 일때 i가 3월보다 작은 즉 1과 2를 1,2를 반복해 증가하면서  이부분이 2번 실행됨  
                // 1보다 클때부터 시작이라 1월2일은 day만 입력되어서 2일차이남  
                // <=을 적으면 ex 3월1일 3월인  31일이 sum에 한번더 더해지고 1이 더해짐  
  {
	if(i == 2)// 이프로그램에서는 윤년을 감안하지 않습니다. (어떤떄는 2월달에 29를 더해주기 때문) 	
    {         // 만약 2월달이라렴 sum에 28을 더함 2월달은 28까지 있어서  
	sum +=28;
	}
    else if(i % 2 == 0)
    {
    sum +=30;	
	}
	else
	{
		sum +=31; // 홀수월은 31일 까지 있음   
	}
	
  }  
  
  return sum + day; // sum은 특정한 달까지에 날짜 개수를 구한거고 day는 몇날 몇일 이기 때문에 그일자를 그냥 그대로 더해준것임 
  // 1월달일 때는 31일 더해지고 2월달일때는 28일 더해져서 3월1일일때는 총 60이라는 수사를 반환 하게됨 왜냐하면 1월1읿터 3월1일까지의 거리는 60일이기 
  // 때문   
  // 이런식으로 이러한 함수를 하나 만들어놓으면 언제든지 이함수를 다시 복사해서 사용할수 있으므로써 자기 자신만의 함수가 탄생한다고 할수 있는것임 
  // 사용자 정의함수란 이런데서 바로 의미가 있는것임 이렇게 다방면으로 자기가 필요한 함수를 그떄 그때 만들어서 활용할수있는게 좋은 프로그래머가 
  // 되는 방법이라 할수있음  
   
}


int main (void)
{
	int month,day; // 메인에서 다시 또 사용할꺼고 매게 변수이기 때문에 선언해줘야함  
	scanf("%d%d",&month,&day);
	printf("1월1일부터 해당 날짜 까지의 거리는 %d일입니다.",getDays(month,day));// 이렇게 매개변수는 여러개 선언이 가능하고 ,로 두개이상을 선언이가능
	                                                      // 다만 앞에 안붙이고 뒤에 붙임 마지막꺼는 생략  
	
	return 0;
}

/*

int main (void)
{
    int month,day;
    printf("달을 입력하시오 : ");
    scanf("%d",&month);
    printf("일을 입력하시오 : ");
    scanf("%d",&day);
    printf("1월1일부터 날짜 차이는 %d 입니다.",getdays(month,day));
	
	return 0;
 } 

나는 요론 식으로 해봄 
*/ 
