#include <stdio.h>
// 시간과 분 더할분을 입력받아 시간을 출력해주는 프로그램
 
int hour;              // 전역 변수  
int minute;
int minuteAdd;

int man5_count = 0;
int man1_count = 0;
int ch5_count = 0;
int ch1_count = 0;
int bak5_count = 0;
int bak1_count = 0;
	
	
void counter()  // 전역 변수를 사용하기 때문에 딱히 int형으로 반환을 하지 않아도 됨 함수사용시 리턴 값을 받아주지 않고 그자체 변수를 사용하면 되서  
{
	minute += minuteAdd;
	hour += minute / 60;       //             60/minute ; 이렇게 쓰면 오류나 60에 분을 나누는거라 (수학적 사고 필요 ㅋㅋㅋ)ㅠㅠ 
	minute %= 60;
	hour %= 24; 
	
}
                         
/*                        
// 특정 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 프로그램(함수) 
int smallest(int number)  
{
	int count = 0;
	while(number>=50000)
	{
		number-=50000;
		count++;
	}
	while(number>=10000)
	{
		number-=10000;
		count++;
	}
	while(number>=5000)
	{
		number-=5000;
		count++;
	}
	while(number>=1000)
	{
		number-=1000;
		count++;
	}
	while(number>=500)
	{
		number-=500;
		count++;
	}
	while(number>=100)
	{
		number-=100;
		count++;
	}
	
	return count;
}
*/


// 특정 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 프로그램(함수) 
void smallest(int number)  
{
	
	while(number>=50000)
	{
		number-=50000;
		man5_count++;
	}
	while(number>=10000)
	{
		number-=10000;
		man1_count++;
	}
	while(number>=5000)
	{
		number-=5000;
		ch5_count++;
	}
	while(number>=1000)
	{
		number-=1000;
	    ch1_count++;
	}
	while(number>=500)
	{
		number-=500;
		bak5_count++;
	}
	while(number>=100)
	{
		number-=100;
	    bak1_count++;
	}
	
}
 

// 1월 1일부터 현재 날짜까지의 날짜 차이를 구하는 프로그램(함수)  
int gatDays(int month, int day) 
{
	int i, sum=0;
	for(i=1;i<month;i++)
	{
		if(i == 2)
		{
			sum+=28;
		}
		else if(i%2 == 0)
		{
			sum+=30;
		}
		else
		{
			sum+=31;
		}
	}
	return sum+day;
}

int main (void)
{
	printf("시간을 입력해주세요: ");
	scanf("%d",&hour);
	printf("분을 입력해주세요: ");
	scanf("%d",&minute);
	printf("더할 분을 입력해주세요: ");
	scanf("%d",&minuteAdd);
	counter();                     // 빨려들어가서 계산한후 다시 돌아옴 
	printf("더해진 시간은 %d시 %d분 입니다.\n",hour,minute);
	
	int number;
	printf("금액을 입력하세요 : ");
	scanf("%d", &number);
	smallest(number);
	printf("최소로 줄 수 있는 화폐의 개수는 \n 5만원 %d장 \n 1만원 %d장 \n 5천원 %d장 \n 1천원 %d장 \n 5백원 %d개 \n 1백원 %d개 \n"
	,man5_count, man1_count, ch5_count ,ch1_count ,bak5_count, bak1_count);
	 
	int month, day;
	printf("1월1일부터 원하시는 월,일 까지의 날짜 차이를 구해주는 프로그램 입니다. \n");
	scanf("%d %d",&month,&day);
	printf("1월1일부터 해당 날짜까지의 거리는 %d일 입니다.\n",gatDays(month,day));
	
	
	
	return 0;
}
