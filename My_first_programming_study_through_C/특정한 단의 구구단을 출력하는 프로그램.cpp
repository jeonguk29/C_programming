#include <stdio.h>
int main (void)
{
	int x, i;
	printf("정수의값을 입력하세요 : "); // 프린트에프와 스켄에프는 둘다 " 써주고 , 를 찍음  
	scanf("%d",&x);
	for(i=1;i<=9;i++)
	{
		printf("%d X %d = %d\n",x,i,x*i);		
	}
	 
	return 0;
}

/*
#include <stdio.h>
int main (void)
{
	int x, i;
    printf("정수의 값을 입력하시오: "); 
	scanf("%d",&x);
    for(i=1;i<=9;i++)
    {
    	printf("%d x %d= %d\n",x,i,x*i);    
    	
	}
	printf("정수의 값을 입력하시오: "); 
	scanf("%d",&x);
    continue;  	 왜 컨티뉴가 안되는것인가   
	return 0;
}





*/
