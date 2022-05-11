#include <stdio.h>
int main (void)
{
	int i, j, min, index, temp;
	// i,j = 배열에 있는 원소를 반복적으로 탐색하기 위한것,  min 최솟값을 의미함 가장 작은것을 반복적으로 선택하기 위해서
	// index 가장 작은 원소가 존재하는곳 temp 특정한 두숫자를 바꾸기 위해서 사용  
	
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0;i < 10; i++)
	{
	    min = 9999; // 모든 원소보다 큰값 항상 최솟값을 선택해야되서 
		for(j = i; j < 10; j++)
		{
			if(min > array[j])
			{// 현제 최솟값보다 작다면  
				min = array[j]; // 최솟값을 그 원소로 바꿔줌 
				index = j; // 해당위치 값을 넣어줌  
			}
		}	
		// 가장 작은 값을 맨앞으로 보내즘
		temp = array[i];   // 일시적으로 가장 앞에 있는 값을 넣어주고  
		array[i] = array[index]; //  가장 앞에 있는 원소의 값으로 최소값을 ㅎ넣어준뒤에  
		array[index] = temp; // 다시 이 최소값이 있던 위치에 템프값을 넣어줌
		// 일반적으로 스와핑을 한다고 함 그냥 두원소를(위치) 바꿔주는 것임  
    }
    // 정렬 출력
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	} 
	return 0;
}
/*
1. 가장 작은것을 앞으로 보낸다 앞으로 보내면 그배열을 제외하고(하나씩 빼면서) 다음 칸으로 넘어간다
2. 한번 돌때마다 min 초기화가 되어야 하고
3. min이 더 크다면 그때 min값을 그 배열의 원소 값으로 바꿔준다.
4. 그리고 첫자리와 한번 비교 정렬 했을때 가장 작은 값을 바꿔 준다  

여기서 가장 중요한 것이 있음 노트확인  
처리할 개수가 많은 경우에는 최대한 피해야 되는 시간복잡도 중 하나임 
( 개수가 많을만큼 처리해야될 연산이 많아서 N * N(시간복잡도) 이게 선택정렬의 한계임 ) 
*/
