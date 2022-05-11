#include <stdio.h>
#define NUMBER 5 

int main (void)
{
    int array[NUMBER];
	int i,addmax,evenmax; // addmax 홀수 최댓값 evenmax 짝수 최댓값이라고 할수있음    
	
	addmax= 0;
	evenmax= 0;
	for(i=0;i<NUMBER;i++) //0~4 5번 반복하면서    
	{
		scanf("%d",&array[i]); // 일단 어뤠이에 특정 인덱스 (순서를) i 즉 0~4 까지 모든순서의 값들을 입력받고 각각의 위치를 검사 할수있도록함
		if(array[i]%2 == 0)// 만약 어뤠이에 특정한 순서에 입력된값이 2로나누엇을때 나머지가 0 즉 짝수라면  
		{
			if(evenmax < array[i]) // 이븐 멕스와 비교를함 ex    0<12 [0]
			{
				evenmax = array[i];// 그리고 이븐맥스가 해당값을 가질수 있도록함 이븐맥스보다 현재 해당하는 비교 값이 더클때 즉 더큰값을 찿았을때 
				                   // 교체 해주는것임  그럼 이븐맥스는 12가 됨      만약 24가 들어오면       24가 되는것임  
			}
	    }
		else // 짝수가아니면 모두 홀수라 이렇게 똑같이써주면 됨  
		{
	          if(addmax < array[i]) 
			{
				addmax = array[i];
			}
		}		
    }
    printf("%d %d",addmax,evenmax);  
	return 0;                                        // 이렇게 해주면 홀수중에 최댓값과 짝수중에 최댓값을 차례대로 출력 하는것을 알수있음                
 }                                                   // 이렇게 배열을 사용하면 아주많은 양에 데이터라고 하더라도 순식간에 자신의 목적에 맞게 
                                                     // 데이터들을 관리하고 추출 할수있음  
 

