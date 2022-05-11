#include <stdio.h>
#include <algorithm>

int number, data[1000000];

int main(void) {
   scanf("%d", &number);
   for(int i = 0; i < number; i++) {
      scanf("%d", &data[i]);
   }
   std::sort(data, data + number);   // 이 소트 함수를 쓰면 됨 이 소트 함수는 내부적으로 퀵정렬을 이용해서 구현이 되어있음 
   for(int i = 0; i < number; i++) {  // 사실 이 구현 원리가 퀵정렬이지 똑같은건 아님 그래서 이 소트 함수 같은 경우는 내부적인
      printf("%d\n", data[i]);         // 처리 로직에 의해서 이 퀵정렬이 가지고 있는 한계점인 O(N ^ 2)을 효과적으로 해결한 라이브 러리임 
   }
   return 0;
}
