#include <stdio.h>
#include <string.h>
 
#include <stdio.h>
int main (void)
{
    char input[11] ="I LOVE YOU";// 이라는 문자열을 만들어주고  
	char result[5] ="LOVE";
	strcpy(result,input);// 이렇게 써주면 리썰트라는 문자열이 인풋 문자열을 카피할수 있음  
	printf("문자열 복사 : %s\n",result); 
  //strcpy 내부적으로 포인터를 다루는 함수인데 
  // 순식간에 result 에 문자열 주소를 intput 주소로 똑같이 바꿔줌 
  // char *strcpy        
  
  /*   strcpy(*input,*result) 
	   *result = *input;  
	   
  */                                       
	return 0;
}
