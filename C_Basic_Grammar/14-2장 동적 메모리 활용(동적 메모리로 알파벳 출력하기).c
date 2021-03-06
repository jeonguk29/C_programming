// 동적메모리로 100바이트를 할당 받아 알파벳을 츨력해봅니다.        // 동적 메모리를 활용한 배열관리에 대표적인 예제  
#include <stdio.h>
#include <stdlib.h> 
int main (void)
{
	char *pc = NULL; // 알파벳을 출력하기위해 케릭터 포인터 변수임 
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); 
	/*
	아까와 좀 다름  (sizeof(int)) = 단 한개의 변수가 들어 갈수 있을 만큼에 메모리 공간을 할당해 주었는데  100 * sizeof(char)  즉  하나의 문자가 들어갈수 있는 공간 * 100 
	즉 총 100개의 문자가 들어갈수 있는 문자열을 위한 공간이 할당이 된것임 다시 말해 총 100개의 문자가  이 pc포인터를 이용해서 들어갈수 있는것임  
	     pc =  char * -> = & | 0| 1| 2| 3| | | | | | | | | ~~~ 
	     *pc = | 0| 여기를 가르킴  
	     
	     100 * sizeof(char) = 사실상 배열과 같다고 할수 있음  배열도 특정한 자료형을 몇개만큼 들어갈수 있는지 초기화를 해주는데  
	     그것과 마찬가지로 동적메모리 할당또한 케릭터의 크기만큼 100개가 할당된다 즉 케릭터가 100개들어갈수 있는 공간을 만든다라고 할수 있음  
	*/
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	// pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입 합니다. 
	
	// 동적메모리 배열안에 넣을 때는 포인터를 사용 하지만 출력할때는 배열이기에 pc만 입력하면됨  
	for(i=0;i<26;i++)
	{
		*(pc + i) = 'a' + i; //  *pc + 0 =  | 0| = 'a'   *pc + 1 =  | 1| = 'a'+1 = 'B' 내부적 아스키 코드라 
		// 사실상 배열임  *pc + 0  = pc[0]  *pc + 1  = pc[1]  *pc + 2  = pc[2]  이렇게 포인터로 관리 하는거랑 배열로 관리하는거랑 비슷한 원리임  
    }
    //
    *(pc + i) = 0; // i 는 26일 때 탈출해서 26 이 나오면 아스키코드 0에 해당하는 문자를 넣어줌 아스키 코드 0은 NULL에 해당함 
	//c언어에서 문자열은 문자에 배열로 표현이 되기 때문에 문자가 들어가다가 널을 만나면 그게 문자열의 종료를 의미함  
	// 즉 pc라는 문자열 포인터의 종료를 인식함  
    
	printf("%s\n",pc); // 널을 만날때까지 출력함 a~z까지 차례대로 출력  
	free(pc); // 동적메모리 할당 해지 = 다시 어떠한 변수를 위한 메모리 공간으로 사용이됨   
	
	return 0;
}
