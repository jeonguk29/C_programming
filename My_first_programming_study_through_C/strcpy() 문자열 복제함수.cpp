#include <stdio.h>
#include <string.h>
int main (void)
{
	
	char input[11] ="I LOVE YOU";// 이라는 문자열을 만들어주고  
	char result[5] ="LOVE";
	strcpy(result,input);// 이렇게 써주면 리썰트라는 문자열이 인풋 문자열을 카피할수 있음  
	printf("문자열 복사 : %s\n",result); // 놀랍게도 리썰트는 총 5개가 들어갈수 있는 공간을 할당 했음에도 불구하고 
	// I LOVE YOU 라는 총 10개의 더긴문자가 한번에 할당이 된것을 알수있음 그이유는 strcpy()가 내부적으로 포인터를 다루는 함수라 그렇기 때문임 
	//  그래서 문자 관련 포인터를 이렇게 다루므로써 글자가 더적다고 하더라고 순식간에 복가가 가능하도록 해줌 주소를 바꿔서 

	  //strcpy 내부적으로 포인터를 다루는 함수인데 
  // 순식간에 result 에 문자열 주소를 intput 주소로 똑같이 바꿔줌 
  // char *strcpy        
  
  /*   strcpy(*input,*result) 
	   *result = *input;  
	   
  */           	
    // strcpy() 문자 복제 함수는 strcpm() 많큼이나 많이 사용됨 
    // 사실상  strcpy() , strcpm() , strlen() 지금 배운 이3가지가 가장많이 사용되는 문자열 함수라고 할수있음 
	 
	// strcpy() 을 위처럼 이런식으로 활용하게 되면 스트린 카피 함수는 정말 간편하면서도 빠르게 두개의 문자를 서로 복사하고 교체해줄수 있도록 
	// 훌룡한 기능을 제공한다고 할수 있음 c언어 에서는 이처럼 char 라는 기본 변수형을 이용해서 다양하게 문자열을 표현하는 방법을 제공하고 있고 
	// #include <string.h> 스트링 헤더파일에는 strcpy() , strcpm() , strlen() 이와같이 다양한 스트린 즉 문자열 관련 함수들을  
	// 제공 하고 있다는것을 알고 다양한 문자열에 대한 활용방법을 아는게 중요하다고 할수있음  
	
	return 0;
 } 
