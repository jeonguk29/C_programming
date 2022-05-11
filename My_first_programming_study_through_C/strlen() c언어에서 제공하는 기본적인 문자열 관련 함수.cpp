#include <stdio.h>
#include <string.h>// c언어 에서는 이렇게 스트링 헤더파일을 제공해주는데요 문자열 관련 각종 함수들을 제공해주는 하나의 라이브러리 라고 할수있음 

int main (void)
{
	char input[5]="LOVE"; // 즉 5개 만큼에 문자가 들어갈수 있는 공간을 만들어주고 LOVE 라고 넣어준것임  
	printf("문자열의 길이 : %d\n", strlen(input));// 사실 strlen(input) 이것은 좀전에 구현했던 '하나의 문자열안에 글자수 세기'랑 동일한 기능을 제공함 
	                                              // 아마 <string.h>에 strlen(input)은 아마 내부적으로 '하나의 문자열안에 글자수 세기' 프로그램과 
												  // 상당히 흡사한 내용을 담고 있는 함수를 제공해주고 있을 뿐이라는것을 이해하는것이 중요   
	
	return 0;
 } 
