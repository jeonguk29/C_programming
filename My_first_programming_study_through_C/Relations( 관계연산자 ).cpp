#include <stdio.h>
int main (void)
{
	int x=50, y=30;
	
	printf("x가 y이랑 같은가? %d\n",x==y); 
	printf("x가 y이랑 다른가? %d\n",x!=y); 
	printf("x가 y보다 큰가? %d\n",x > y);
	printf("x가 y보다 작은가? %d\n",x < y);
	printf("x에 y값을 넣으면? %d\n",x = y); // =은 오른쪽같을 x에 집어넣을거라는뜻 그래서 출력되는것은 y갑임 왜냐하면 수학처럼 왼족으로 계산이
	                                        // 되는데 그러면 y가 x에 들어가고 x가 출력되기 때문.   참고로 50에30을 더하는 뜻이아님 그리고  
	                                        // 또하나 참고 하자면  나중에 제어문 할때 관계연산자 많이 쓰임 ex if 문
	
	if(x==y)
	{
		
		//트루값일때 실행되는 부분 
		
	 }  
	else
	{
		
		//false 값일때 실행 되는 부 
	 } 
	
	
	
	
	
	return 0;
	
}
