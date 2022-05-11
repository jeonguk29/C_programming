#include <stdio.h>

// 조합: 서로다른 n개의 물건에서 순서를 생각하지 않고 r개를 택할때 이것은 n개에서 r개를 택하는 조합이라 하고. 이 조합의 수를 기호로nCr와 같이 나타낸다. 
// nCr은 r이 0이거나 n이라면 1이라는 값을 가지며 그렇지 않으면 nCr(n-1,r-1) + nCr(n-1,r)와 같다 이렇게 두개의 값을 더한것과 같다는 공식이 있음
// 사실 이러한 형태가 프로그래밍에서는 굉장히 적용하기 쉬운형태라고 할수있음  
int nCr(int n,int r)
{
	if(r==0 || r==n)//0이거나 r이라면  
	{
		return 1;//1을 반환하고  
	}
	else
	{
		return nCr(n-1,r-1)+nCr(n-1,r);// 그렇지 않으면 nCr이라는 함수에 n,r 변수에 1을 뺴고 nCr이라는 함수에 n에 1을 뺴고 r을 더한 것과 같다.  
	}
 } 
 
 int main(void)
 {
    int n,r; // 다시 매개 변수를 밭아서  
	scanf("%d%d",&n,&r); // 이값을 밭고 결과 갑을 출력하기 위해서는 이렇게 밑에처럼 해저야함 그래야 함수로 다시돌아가서 함수의 조건대로 연산한후 
	                     // 출력을 할수 있기 때문
 	printf("%d",nCr(n,r));// 이렇게 결과를 출력함   nCr(n,r); 이렇게만 써주면 연산을 해서 출력해주는 문장이없어 결과가 나오지 않음  
	                    
 	return 0;
 }
 
 // 이렇게 재귀함수를 이용하면 이러한 수학 공식 또한 순식간에 응용을 해서 바로 프로그래밍으로 수학적 문제를 접목할수도 있는것 입니다. 
 
 
 /* 내가 인트 메인 부분을 좀더 ㄱㅊ 게 만든것  
  
  #include <stdio.h>

int nCr(int n, int r)
{
   if(r==0 || r==n)
   {
   	return 1;
   }
   else
   {
   	return nCr(n-1,r-1)+nCr(n-1,r);
   }
	
}


int main (void)
{
	int n,r;
    printf("nCr중 n에 값을 입력하시오\n");
	scanf("%d",&n);	
	printf("nCr중 r에 값을 입력하시오\n");
	scanf("%d",&r);
    // nCr(n,r); 이렇게만 써주면 연산을 해서 출력해주는 문장이없어 결과가 나오지 않음 
	printf("결과는 %d입니다",nCr(n,r)); 
	
	return 0;
 } 
 
 */ 
