#include <stdio.h>

int main(void) {
	int i, j, temp; // 버블 정렬과 마찬가지로 반복을 위한 i,j 두개의 원소값을 서로 바꾸기 위한 일시적인 변수 temp가 필요  
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 9; i++) 
	{
		j = i; // j에 i를 넣어줌 즉 현제 정렬할 그원소를 선택해서 적절한 위치에 삽입할 수 있게 해주는 것임  
		while(array[j] > array[j + 1]) // j는 1씩 빼나가면서 오른쪽에 있는 값과 비교를 해서 이왼쪽에 있는 값이 더 크다면  
		{
			temp = array[j];              // 위치를 바꿔 주는 것임  
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;                  
		}                                // 이렇게 하면 삽입 정렬은 끝남  
	}  
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	/*
	
	이렇게 생각하면 됨  
    1 5 6 7 8 10 4 3 2 9  : 4를 선택했다고 가정 (이렇게 특정한 원소를 선택한 뒤에 ) 하나씩 내려가면서 당장 왼쪽에 있는 옆에 있는것과 비교를 해나가면서 
	왼쪽에 있는게 더 크다면 서로 위치를 바꿔 주는 것임   1 5 6 7 8 4 10  => 1 5 6 7 4 8 10  => 1 5 6 4 7 8 10 ... => 1 4 5 6 7 8 10 반복해서 이렇게 바꿔 주면
	정렬이 이루어짐 이런 방식의 좋은게 어떤 것이냐면 1 4 5 6 7 8 10 :  1처럼 항상 왼쪽에 있는 것은 정렬이 되어 있다고 가정 하기 때문에 당장 자기가 왼쪽에 있는 거보다
	크다면 거기서 멈춤(ex 1 5 6 7 10 8 이면 8은 10과 위치를 한번 비교해서 바꾸고 다음 7과 비교해서 크니까 그왼쪽에 있는 값들은 정렬에 되어 있다고 생각해서 그자리에서 
	멈춘다는 이야기임 )  즉 멈출 포인트를 알고 있기 때문에 삽입 정렬은 버블 정렬 선택 정렬과 비교했을 때는 보다 더 효율 적이라는 것임  
	*/
	
	
/* 1. 왼쪽에 있는 값과 오른쪽 에 있는 값을 비교해서 왼쪽이 더 크다면 자리 체인지를 하고 난 후 (오른쪽이 자기 자신 : 비교 할 원소라고 생각) 
   2. 원소를 하나씩 빼면서 왼쪽에 있는 값 보다 오른쪽 자기 자신이 클떄까지 비교하면서 자리 체인지를 하며 정렬함 
   3. 이런식으로 원소가 배열이 되고 마찮가지로 계속해서 특정한 원소에서 앞에 원소들을 살펴 보면서 적당한 위치에 들어가는 방식을 채택 하면은
   4. 한번 반복할때마다 원소가 적당한 위치에 들어가는 방식으로 계속해서 하나씩 정렬이 이루어져서 결과적으로 1 2 3 4 5 6 7 8 9 10 으로 정렬이 이루어 지는 것임  
   5. 이중 for문이 아니라 한번 0 ~ 9 까지 돌면서 내가 6이면 6부터 0까지 빼면서 비교를 하는 구조임 빼면서 자기가 왼쪽 보다 크면 
   6. 그대로 끝 앞에는 정렬이 되어 있다고 생각 하니까?   
   7. 삽입 정렬도 i를 9 까지만 조건문에서 +1을 하며 비교 하기 때문에  
*/
	return 0;
}
