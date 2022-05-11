#include <stdio.h>
int main (void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt","r");  // 읽기모드는 input.txt 파일이 같은 폴더 안에 존재해야함  

	if(fp == NULL)  
	{
		printf("파일 열기에 실패했습니다.\n");   // 파일이 없으면 이렇게 나옴  
	} 
	else 
	{
		printf("파일 열기에 성공하셨습니다.\n");
	}
    
    while((c = fgetc(fp)) != EOF) // 즉 지금 열여있는 파일에서 문자 하나를 읽어서 c에저장한다는 것이 파일의 끝이 아닌 End Of File 이 아니라면    
    {
    	putchar(c); // 즉 우리에 콘솔창에 해당 문자를 출력해주는것임 !!! 현재 c가 int형 이니까  숫자를 문자로 바꿔서 출력 하는 것임  
	}               // 지금 열려있는 파일이 끝날때 까지 각각의 문자를 전부 하나씩 출력한다. 즉 파일을 읽으면서 모든 내용을 출력한다는 것.        
    fclose(fp); 
    
	// 같은 폴더안에 위치한 input.txt파일을 찿아서 읽은다음에 파일을 열고 모든 내용을 읽고 이 프로그램 상에서 출력을 해준 것임  
	
	return 0;
}
