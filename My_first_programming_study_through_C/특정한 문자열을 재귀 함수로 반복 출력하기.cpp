#include <stdio.h>


// 재귀함수 recursive function 재귀적이라는 의미 자체는 어떤것을 반복적으로 수행하되 자기가 자기 자신을 포함하는 형태자체를 c언어에서 의미함
// 재귀함수 같은 경우는 오히려 코드자체는 반복함수 보다 훨씬더 짧을 수도 있음 
void print(int count) 
{
	if(count == 0)
	{
		return ;
	}
	else  // 여기서 프린트 함수가 실행이 되면 특정한 문자열을 출력하고 곧바로 이어서 자기와 똑같은 모습의 형태의 함수를 또 실행하는것을 알수있음  
	{     // ex 프린트라는 함수 매개변수안에 10이라는 값을 넣어 실행하면 카운트가 0이아니라 else 부분이 실행되고 다음 카운트에 9,8,7,6,5,4, 1 까지 계속
	      // 내려가면서 반복적으로 문자열이 출력되는것 입니다. 언제까지 반복이 되냐면 1까지 이 카운트가 if의 0이 되는 순간 까지 반복됨
		  // 그니까 처음 카운트에 10이 들어왔다면 총 10번 반복 하게 되는것임 .
		  // 바로 이러한 방법으로 for 문이나 while 문을 전혀 사용하지 않더라도 어떠한 기능을 반복적으로 수행할수 있는것임.
		    
		printf("문자열을 출력합니다.\n");
		print(count -1);   // 이렇게 위에서 문자열을 출력하고 그다음에 프린트라는 함수를 또 실행하는데요 여기서는 카운트 매게 변수에 -1을 빼서 다시
		// 함수를 실행할수 있도록 합니다.  
		// 이렇게 보면 프린트라는 함수 안에서 프린트라는 함수가 또 사용되는것을 알수 있는데 이런것을 바로 재귀함수라고 함.   
	}
}

int main (void)
{
     int number;// 여기서 변수를 만들어서 
	 printf("문자열을 몇개 출력할까요?");
	 scanf("%d",&number);
	 print(number);// 이렇게 함수안에 매개변수로 바로 넣어서 사용할수 있음  
	   
	// 이게 가장 기본적인 재귀함수의 활용방법이라고 할수있음
	// 재귀함수란 다시 쉽게 말해 자기함수안에 자기가 또 들어가있는 형태를 말함  
	return 0;
 } 
