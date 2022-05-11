#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수 
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
 } 

 /* 
                                    이렇게 포인터를 사용하지 않으면 함수 내에서만 처리를 하고 끝나기 때문에 값이 바뀌지 않음 call by value 
 void swap(int x,int y) 
{
	int temp;
	temp = x;
	x = y;
	y = temp;
 } 


int main (void)
{
	int x = 1;
	int y = 2;
	swap(x, y);
	printf("x = %d\ny = %d\n",x,y);
	
	
	return 0;
 } 
 
 */


int main (void)     // 포인터를 이용하면 특정한 함수가 사용이 될때 단순히 함수가 끝나면서 변수들이 끝나는게 아니라 이 함수를 불러온 메인함수에서도 영향을 미칠수 있음   
{                   // 한마디로 포인터를 사용하면 프로그램 전역에서 언제 어디서든 간에 어떠한 변수가 가지는 값들을 바꾸는등 다양하게 활용이 가능   
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d\ny = %d\n",x,y);
	
	int a = 10;  // 값을 바꾸면 같이 바뀜  
	int *b = &a;
	printf("%d %d %d %d",a,&a,b,*b); //a = *b 같음 &a = b 같음         개념 이해 중요  
	
	
	
	
	printf("\n\n=======================================\n");
	
	int i = 10;
	int *p;
	p = &i;                   // p는 i의 주소를 기억 
	printf("i = %d\n",i);   
	*p = 20;                  // p가 가르키는 곳을 20으로 바꿈  =  * 가르켜라 p(i의 주소 001100 )을 -->  20으로    
	printf("i = %d\n",i); 
	
	
	
	// 배열은 포인터라고 할수있음 배열 그자체 이름이 배열의 첫번째 주소를 가르키고 있기 때문임 이름+1 하면 다음 배열 공간임 
	
	// 배열의 주소를 아는방법은 array[1] = 7  &array[1] =1002
	
	
	
	/*
	int i = 10;
    int *j = &i;
    printf("%d\n",i);
    printf("%d\n",*j);
    *j = 30; // i주소에 30을 넣어라  
    printf("%d\n",i);
    printf("%d\n",*j);// i주소를 가르키고 있으니까 i와 값이 같은 것임  
    */
	
	return 0;
 } 
 
 

