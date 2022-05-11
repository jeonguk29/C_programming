#include <stdio.h>
int main (void)
{
	
	// 반복문을 이용한 무한루프와 기본 입출력 방법을 사용한 계산기 프로그램  
	int x,y;
	char z;
	
	while(1)
	{
		printf("수식을 입력 하세요: ");
		scanf("%d %c %d",&x,&z,&y);
		if(z=='+')
		{
			printf("%d %c %d = %d 입니다.\n",x,z,y,x+y);
		}
		else if(z=='-')
		{
			printf("%d %c %d = %d 입니다.\n",x,z,y,x-y);
		}
		else if(z=='*')
		{
			printf("%d %c %d = %d 입니다.\n",x,z,y,x*y);
		}
		else if(z=='/')
		{
			printf("%d %c %d = %d 입니다.\n",x,z,y,x/y);
		}
		else if(z=='%')
		{
			printf("%d %c %d = %d 입니다.\n",x,z,y,x%y);
		}
		else
		{
			printf("입력이 잘못 되었습니다.\n");
		}
		getchar();
		printf("프로그램을 종료 하시겠습니까? (y/n) \n");
		scanf("%c",&z);
		if(z=='y' || z=='Y')
		{
			break;
		}
		else if(z=='n' || z=='N')
		{
			continue;
		}
		else
		{
			printf("입력이 잘못 되었습니다.\n");
		 } 
	}
	
	printf("\n\n--------------------------------------------------------\n");
	
	// 반복문 과 기본 입출력을 이용한 원하는 개수만큼 정수를 더하는 프로그램  
	int number, l, i, sum=0;
	printf("몇개의 정수를 더하시겠습니까? : \n");
	scanf("%d",&number);
	for(l=0;l<number;l++)
	{
		printf("%d 번째 정수를 입력 하세요: ",l+1);
		scanf("%d",&i);
		sum+=i;
	}
	printf("%d개의 입력한 정수의 합은? %d 입니다. \n",number,sum);
	
	printf("\n\n--------------------------------------------------------\n");
	
	// 원하는 구구단의 단을 출력하는 프로그램  
	int guo,dan;
	printf("원하시는 구구단의 단을 입력하세요: ");
	scanf("%d",&dan);
	for(guo=1;guo<=9;guo++)
	{
		printf("%d x %d = %d \n",dan,guo,dan*guo);
	}  
	
	
	return 0;
}
