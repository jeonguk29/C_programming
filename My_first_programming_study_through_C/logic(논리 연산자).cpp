#include <stdio.h> 
int main (void)
{

int x=50, y=30;
printf("x가 y이보다 크고 y가 40미만입니까? %d\n", (x > y) && (y <40)); //이러면 두가지 질문의 대한 답을 묶어서 트루값으로 반환함 &&이것은 and 의 의미 
                                                                       //그리고, 그와동시에 라는 뜻을 가지고있음 
printf("x가 y보다 작거나 혹은 y가 30입니까? %d\n", (x > y) || (y==30)) ; // || 은 혹은이라는 뜻을 가지고있어서 왼쪽에 있는게 성립하거나 오른쪽에 있는게
                                                                         // 성립하면 즉 둘중하나만 성립하더라고 트루값을 반황하도록해줌 
printf("x가 50이 아닙니까? %d\n", x != 50);


//참고로 x가 100과 200 사이에 있다고 할때 100< x <200 이아니라 (100<x) && (x<200) 로 표현하는게 올마른 연산식 표기임  


	return 0;
}
