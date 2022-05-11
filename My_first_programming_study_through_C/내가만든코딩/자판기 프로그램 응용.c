#include <stdio.h>

int Vending(int a);
 
int main (void)
{
	
	
	for(;;)
	{
		int number;
	
    printf("원하시는 음료수의 번호를 입력하세요\n");
    printf("1: 사이다.\n");
    printf("2: 콜라.\n");
    printf("3: 환타.\n");
    printf("4: 맥콜.\n");
    printf("5: 말리부.\n");
    printf("6: 보드카.\n\n");
    printf("7~: 구매취소.\n");
    
    scanf("%d",&number);
    Vending(number);
    
    if(number >= 7)
    {
    	break ;
	}
    
}
	
	return 0;
 } 
 
  int Vending(int a)
 {
 	if (a == 1)
 	{
 		printf("1: 사이다를 선택 하셨군요 \n\n");
	 }
 	else if ( a == 2)
	 {
	    printf("2: 콜라를 선택 하셨군요 \n\n");
	} 
	else if ( a == 3)
	 {
	    printf("3: 환타를 선택 하셨군요 \n\n");
	} 
	else if ( a == 4)
	 {
	    printf("4: 맥콜를 선택 하셨군요 \n\n");
	} 
	else if ( a == 5)
	 {
	    printf("5: 말리부를 선택 하셨군요 \n\n");
	} 
    else if ( a == 6)
	 {
	    printf("6: 보드카를 선택 하셨군요 \n\n");
	} 
	else
	{
		printf("다음에 다시 방문해주세요~ \n\n");
	}
	
 	return 0;
 }
  
