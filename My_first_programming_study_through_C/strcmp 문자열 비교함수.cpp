#include <stdio.h>
#include <string.h>
int main (void)
{
	char inputOne[5] ="A";
	char inputTow[5] ="B";
	printf("문자열 비교 : %d\n",strcmp(inputOne,inputTow));// strcmp(inputOne,inputTow) 이런식으로 입력을 해주면 
	                           // inputOne과 inputTow 를 사저적으로 비교하면서 뭐가 더앞에오는지 비교할수 있음 
	// A B = -1  즉 왼쪽에 있는게 사전적으로 더앞에있다면 -1을 출력함 						   
	// B A = 1   반대로 오른쪾에 있는게 사전적으로 더앞에 있다면 1을 출력함						     
	// B B = 0   하지만 두문자가 사전적으로 동일하다면 0이나옴 
	//strcmp()은  이처럼 사전적으로 두문자를 비교하여 특정한 숫자를 반환하는 함수라고 할수있음 
	
    // -1 0 1
    // 사전적으로 앞에것이 먼저면 -1 같으면 0 뒤에것이 먼저면 1 

	//이렇게  strcmp() 라는것은 c언어로 사전구현하기 영단어 암기장 구현하기 등 이러한 다양한 프로그램을 짤때 정말 많이 활용되는 함수라고 할수있음   
  }  
