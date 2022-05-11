#include <stdio.h>
int main (void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt","w"); // 즉 파일을 열어라 쓰기모드는 파일을 새로 만듬 오른쪽은 모드를 의미함  
	// w => 쓰기 모드(write), r => 읽기 모드(Read)
	
	if(fp == NULL)  // 즉 해당 파일을 열지 못했다면  
	{
		printf("파일 열기에 실패했습니다.\n");
	} 
	else // 그렇지 않은 경우는  
	{
		printf("파일 열기에 성공하셨습니다.\n");
	}
	fputc('H',fp); //  파일에 한글자 한글자 출력하는 (방법 파일 문자 입력 )H를 fp에 현재 fp는 쓰기 모드에 output.txt 파일임    
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
    fclose(fp); // 프로그램을 종료할때는 반드시 해당 파일 포인터 변수를 닫아주어야함  
	// 동적 메모리할당도 똑같은 free(pi) 
	
	return 0;
}
