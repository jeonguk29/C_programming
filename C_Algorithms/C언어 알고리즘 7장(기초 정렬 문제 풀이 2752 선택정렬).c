#include <stdio.h>

int array[3];

int main(void) {
	int i, j, min, index, temp;
	for(i = 0; i < 3; i++) {
		scanf("%d", &array[i]);
	}
	for(i = 0; i < 3; i++) {
		min = 1000001; // min 값은   항상 들어오는 값보다 커야 되서 백만 1로 해줌  
		for(j = i; j < 3; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < 3; i++) {
		printf("%d ", array[i]); // 띄어 쓰기로 구분해서 출력함 출력 예시가  
	}
	return 0;
}
