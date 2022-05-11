#include <stdio.h> 

void displayMyName(void);  //선언

void displayMyAge(void);

int doubleIntNum(int x);

void displayDoubleIntNum(int x);

int add(int x, int y);

double div(int x, int y);

int add3(int x, int y, int z);

char Vending(int x);

const char* Vending1(char x);

 

int main(void)

 

{

 

	int x1,x3;
	double x2;
	char x4,x5;
	const char* x6;

 

	printf("aaaaa\n");
		
	displayMyName();  //호출
	displayMyAge();

	x1 = doubleIntNum(20);
    printf("%d\n", x1);
    printf("%d\n", doubleIntNum(10));


    displayDoubleIntNum(7);


    x1 = add(3, 4);
    printf("%d\n", x1);

 
	x2 = div(5, 3);
	printf("%g\n", x2);

 

	x3=add3(10, 20, 30);
    printf("%d\n", x3);

 

	x4 = Vending(3);

		printf("%c\n",x4);

		printf("%c\n", Vending(1));

 
    x6 = Vending1(1);
    printf("%s",x6);
	printf("%s",Vending1('s'));

 

 

	

 

	return 0;

 

}

void displayMyName(void) //정의
{
	
	printf("han\n");
}


void displayMyAge(void) //정의
{
	
	printf("21\n");
	
}

int doubleIntNum(int x) //정의
{
	
	return (x * 2);    // 리턴으로 뿌려주는 함수 
	
}

void displayDoubleIntNum(int x) //정의
{
	
	printf("%d\n", x * 2); // 리턴없이 출력해주는 함수
	
}


int add(int x, int y)
{
	
	return (x + y);
	
}


double div(int x, int y)
{
	
	return (double)x / y;
	
}


int add3(int x, int y, int z)
{
	
	return (x + y + z);
	
}

  
char Vending(int x)

{

	if (x == 1) return 'A';

	else return 'B';

}


const char* Vending1(char x)  // 시험 

{

	if (x == 'c') return "콜라\n";

	else if (x == 's') return "사이다\n";

	else if (x == 'h') return "환타\n";

	else return "물건없음\n";

}





 
