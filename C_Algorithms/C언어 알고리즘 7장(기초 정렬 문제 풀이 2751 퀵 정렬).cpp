#include <stdio.h>

int number, data[1000001]; // 데이터가 100만개 만큼 들어 갈수 있도록 공간을 만들어 줌  

void quickSort(int* data, int start, int end) { // 특정한 배열과 시작점 끝점을 매개 변수로 받아서   
   if (start >= end) { // 원소가 1개인 경우 그대로 두기 
      return;
   }
   
   int key = start; // 키는 첫 번째 원소
   int i = start + 1, j = end, temp; 
   
   while(i <= j) { // 엇갈릴 때까지 반복
      while(data[i] <= data[key]) { // 키 값을 기준으로 왼쪽부터 출발을 해서 키 값보다 큰 값을 만날 때까지 
         i++; // i를 계속해서 오른쪽으로 이동  
      }
      while(data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날 때까지 
         j--; // j를 1씩 뺴며 왼쪾으로 j > start  이제 이부분 같은 경우는 항상 엇갈렸을 때 왼쪽에 있는 값과  
      }       // 피벗 값을 바꿔 주기 때문에  j는 왼쪽에 있는 값을 침범 할수 없도록 영역 제한을 해주는 것임  
      if(i > j) { // 현재 엇갈린 상태면 키 값과 교체 
         temp = data[j];
         data[j] = data[key];
         data[key] = temp;
      } else { // 엇갈리지 않았다면 i와 j를 교체 작은 값과 큰값을 교체 
         temp = data[i];
         data[i] = data[j];
         data[j] = temp;
      }
   } 
   // 한번 정렬을 마치고 나면 피벗 값을 기준으로 왼쪽과 오른쪽으로 정렬이 이루어져 있기 때문에  
   quickSort(data, start, j - 1); // 다시 왼쪽과  
   quickSort(data, j + 1, end);  // 오른쪽을 각각 퀵 정렬을 수행 시켜줘야된다고 했음  
}
// 이런식으로 하면 깔끔하게 퀵정렬이 수행이 되는 것임  

int main(void) { // 메인 함수에서는 입력을 받아서 처리할수 있도록 해줌   
   scanf("%d", &number);
   for(int i = 0; i < number; i++) {
      scanf("%d", &data[i]); // 모든 원소를 다 입력 받을수 있도록 만들어 주고  
   }
   quickSort(data, 0, number - 1); // 입력 받은 데이터를 정렬 해줘야함 첫번째 값부터 마지막 인덱스 까지 정렬을 수행해라  
   for(int i = 0; i < number; i++) {
      printf("%d\n", data[i]); // 이제 정렬 된 데이터를 줄바꿈을 통해 출력함  
   }
   return 0;
}
