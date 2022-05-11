#include <stdio.h>
#include <string.h> // c언어에서 문자열 관련 함수들을 제공해주는 전처리기  
int main (void)
{
	// 하나의 문자열안에 글자수 세기  
	char input[1001];
	gets(input);   // 인풋이라는 캐릭터 배열 안에 (input 자체가 첫번째 주소니까) 그다음으로 사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는 것을 의미함     
	int count = 0;
	//HELLO\0
	while(input[count] != '\0')
	{
		count++;
	}
	printf("문자열의 길이는 %d 입니다.\n",count);
	printf("입력한 문자열은\n%s 입니다.\n",input); // %s또한 내부적으로 널값이 보일때까지 출력하라라는 기능을 가지고 있음 
	
	
	/*
	문자열은 문자형 배열에 두 가지 방법으로 초기화할 수 있음  (에초에 c언어는 따로 문자열을 저장할수 있는 자료형이 없기 때문에  char 자료형 만을 이용하여 문자열을 표현 해야함 
    char eng[4]={'A', 'B', 'C','\0'}      문자의 모임                       따라서 c언어에서 문자열을 표현할때는 char자료형을 연속적으로 사용해야함 ) 
    cahr eng[4]="ABC";                   문자열                    


     문자열은 scanf할때 & 필요없음 이름 자체가 첫번째 시작 주소고  %s로 엔터 칠때까지 쪼로록 들어가는 거라 
	 그냥 정수형 실수형 배열은 대부분 &필요 몇번째 인덱스에 들어가는지 확실하게 지정해야하기 때문 &int[i] 이런식으로 많이 사용 
	 
	 	int i;
	int integer[10];
	for(i=0;i<10;i++)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d",&integer[i]); 
	} 
    for(i=0;i<10;i++)
	{
        printf("정수출력: %d\n",integer[i]);
	}      
	
	for(i=0;i<10;i++)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d",&integer + i); 
	} 
    for(i=0;i<10;i++)
	{
        printf("정수출력: %d\n",integer[i]);
	}      
	
	
	
	char test[20];
	scanf("%s",test); // 엔터 칠때 까지 입력 해서  test에 넣어라 
	printf("%s",test); // 널값 나올 때 까지 출력해라 
	
    */
    
    
    
    
    
    // strlen() 문자열의 길이를 알수 있는 함수 = 위에 한것과 동일한기능 내부적으로 위에와 같은 프로그램과 흡사한 내용을 담고있음   
    
    char input_2[5]="LOVE"; // 배열 선언과 동시에 초기화 
	printf("문자열의 길이 : %d\n", strlen(input_2)); 
    
    // strcmp()  사전적으로 두문자를 비교하여 특정한 숫자를 반환하는 함수
    
    char inputOne[5] = "B"; 
    char inputTwo[5] = "B"; 
    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
    
    /*
    strcmp(inputOne,inputTow) 이런식으로 입력을 해주면 
    inputOne과 inputTow 를 사저적으로 비교하면서 뭐가 더앞에오는지 비교할수 있음 
	A B = -1  즉 왼쪽에 있는게 사전적으로 더앞에있다면 -1을 출력함 						   
	B A = 1   반대로 오른쪾에 있는게 사전적으로 더앞에 있다면 1을 출력함						     
	B B = 0   하지만 두문자가 사전적으로 동일하다면 0이나옴 
	strcmp()은  이처럼 사전적으로 두문자를 비교하여 특정한 숫자를 반환하는 함수라고 할수있음 
    */
    
    //strcpy() 문자열을 복사할수 있는 함수 (내부적으로 포인터를 다루는 함수라 문자를 카피할 글자공간이 더적더라고 가능 하게 해줌 즉 가르키는 것을 바꾸는것 )
	
	char input_3[11] = "I LOVE YOU";
	char result[5] = "Love";
	strcpy(result,input_3);          // 그냥 strcpy(result,"I LOVE YOU");    이렇게 넣어도 됨  
	printf("문자열 복사 : %s\n",result);
    
    
    /*
     이처럼 c언어 에서는 char 라는 기본 자료형을 이용해서 다양하게 문자열을 표현하는 방법을 제공하고 있고 
	 #include <string.h> 스트링 헤더파일에는 strcpy() , strcpm() , strlen() 이와같이 다양한 스트링 즉 문자열 관련 함수들을  
	 제공 하고 있다는것을 알고 다양한 문자열에 대한 활용방법을 아는게 중요하다고 할수있음  
    */
    
    
    // 응용 글자 검사기 
	/*
	#include <stdio.h>
int main (void)
{
		// 하나의 문자열안에 글자수 세기  
	char input[1001];
	gets(input);   // 인풋이라는 캐릭터 배열 안에 (input 자체가 첫번째 주소니까) 그다음으로 사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는 것을 의미함     
	int count = 0;
	int count_A = 0;
	//HELLO\0
	while(input[count] != '\0')
	{ 
		if(input[count] == 'A' || input[count] == 'a')
		{
			count_A++;
		} 
		count++;
	}
	printf("문자열의 길이는 %d 입니다.\n",count);
	printf("입력한 문자열은\n%s 입니다.\n",input); // %s또한 내부적으로 널값이 보일때까지 출력하라라는 기능을 가지고 있음 
	printf("문자열에서 A는 %d 번 나왔습니다.\n",count_A);
	
	return 0;
 } 
 */ 
	return 0;
}
