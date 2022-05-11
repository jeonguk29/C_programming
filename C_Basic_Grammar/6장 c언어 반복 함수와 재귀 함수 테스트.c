#include <stdio.h>

// 반복함수를 이용해서 숫자 피라미드를 출력합니다.
// 반복함수 같은 경우는 오직 For문과 While 문으로 구성이 됩니다.  

int print (int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
	
 } 
 
// 재귀 함수를 통한 문자열 출력 반복 (재귀함수 자기 함수안에 자기가 또 들어 가있는 형태 ) 
void print_1 (int b)
{
	if(b == 0)
	{
		return ;
	}
	else
	{
		printf("문자열을 출력 합니다.\n");
		print_1(b-1); 
	}
 } 

// 재귀 함수로 조합 구현 하기 (조합 = nCr은 r이 0 이거나 n이라면 1이며, nCr(n-1,r-1) + nCr(n-1,r)와 같다.
int nCr (int n, int r)
{
	if(r==0 || r==n)
	{
		return 1;
	}
	else
	{
		return nCr(n-1,r-1) + nCr(n-1,r);
	 } 
}

 

int main (void)
{
	int a,b,n,r;
	scanf("%d",&a);
	print(a);
	
	printf("문자열을 몇 개 출력할까요?");
	scanf("%d",&b);
	print_1(b);
	
	scanf("%d %d",&n,&r);
	printf("%d",nCr(n,r));
		
	return 0;
 } 
