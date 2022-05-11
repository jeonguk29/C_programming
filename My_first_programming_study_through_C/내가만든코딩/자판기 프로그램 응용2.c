#include <stdio.h>

char Vending(int a); 
char* Vending2(int a);

int main (void)
{
	int a;
	char ans;
	printf("1~3눌러주세요");
	scanf("%d",&a);
	
	ans = Vending(a); 
	printf("%c\n",ans);
 
	printf("%s\n",Vending2(a));
	
	
	return 0;
 } 
 
 char Vending(int a)
 {
 	
 	if(a == 1) return 'a';
 	else if (a == 2) return 'b';
 	else return 'c';                  //이렇게 리턴을 여러번 사용할수 있음  
 	
 	printf("여기는 출력이 되지 않습니다.");
 	
 	/* 그이유는 !!!!!
	 return문을 만나면 함수의 나머지 부분에 상관없이 함수의 실행을 종료하고 호출한 함수로 넘어감 
    */ 
 }
 
 char* Vending2(int b) // char* 이렇게 써주면 반환값이 문자열이 됨  
 {
 	
 	if(b == 1) return "콜라";
 	else if (b == 2) return "사이다";
 	else return "소주";                  //이렇게 리턴을 여러번 사용할수 있음  
 	
 }
