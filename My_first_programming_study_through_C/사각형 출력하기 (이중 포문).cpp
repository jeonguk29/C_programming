#include <stdio.h>
#define N 10
int main (void)
{
   int i, j;
   for(i=0;i<N;i++) /*사실상 프로그래밍에서 반복문이라고하면 가장 사용이 많이되는 부분이 이 for문임 
                       i=0; 이부분은 초기화 부분: i를 0으로 초기화 시키고. i<N;이부분은: 조건문,조건식 i가 N보다 작으면 
                      i++ 반복 하면서 연산이 이루어지는 부분: i가 N보다 커질때 까지 1식 증가한다 
					  전반적으로 밑에 까지 for문의 값을 설정해서 반복이 되어 몇번출력된다는 구조임  */ 
   {
       	
   ///printf("$");// 그래서 0부터 9까지 10번 반복  i<10 이니까 결과적으로는 $ 10개나옴  

   } 
  
   int x, y;
   for(x=0;x<N;x++)// x가 N보다 작을떄에 한에서 x를 1식 증가 시켜라 즉 0~9 까지 점점 늘어남  + for문을 작성할때는 ;표시 필요없음   
    { 
      for(y=0;y<N;y++)// 이중포문은 위에for문이 실행될때마다 그러니까 즉 (중요)~~할때마다 , 1씩 증가할때마다, 라는 뜻임  
	                  //그리고 x가 1식증가할때마다 그와동시에 y가 N보다 작을떄에 한에서 0부터 9까지 증가하는데  
	                  // 즉 x가 1식 증가할때마다 y는 0부터 9씩 증가하는것임  즉 결과는 10x10 = 100이지만 y가 1씩 증가할때마다 ㅗ 하나씩 출력되고
	   {
   		printf("ㅗ");// 여기에 출력이 되는것은 y의  for 문임 그리고 x가 1증가당 y가 10개씩 증가하는게 따라 붙으니까 
		             // x가 1씩 증가할때마다  y가 0부터 9까지 1식 증가하면서  ㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗ 열개 출력하고  
	   }
   	{// 요 가로가 있어도 되고 없어도 되는데 그냥 내가 보기편하라고 씀 
       printf("\n");// 그다음 ㅗ 열개 출력이 되면 한줄 뛴다 그리고 다시 for문에서 x가 9가 될때까지  끝날때 까지 반복 
	                // 그러면 ㅗ 열개가 차곡차곡 10개씩 10줄로 쌓여 100개가 되어있는 사각형이 완성됨   
       }
   	
	} 
  
  //사실 for문같은 경우는 앞서배운 while 문법보다 훨씬더 많이 활용됨 바로 다음 (위)와 같이 조건식을 더욱 잘표현할수있다는 그런 특징 때문에 그럼  
  
  // 총정리 x가 0부터 9까지 1식 증가할때마다 y는 0부터9까지 1식 증가함과 동시에 ㅗ 하나를 출력하고 y가 0부터9까지 증가해서 ㅗ가 열개 출력이 되면
  // 그다음 프린트로 한줄을 띄어 주는것임 그런다음 다시 x 1증가 y 10증가 ㅗ10개출력 한줄뛰기 에 반복 x가 9가 될때까지 그럼 총 ㅗ열개 열줄해서 
  // 100개 의 사격형 완성  
  
   return 0; 
 } 
