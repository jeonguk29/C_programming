#include <stdio.h> 

void displayMyName(void);  //����

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
		
	displayMyName();  //ȣ��
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

void displayMyName(void) //����
{
	
	printf("han\n");
}


void displayMyAge(void) //����
{
	
	printf("21\n");
	
}

int doubleIntNum(int x) //����
{
	
	return (x * 2);    // �������� �ѷ��ִ� �Լ� 
	
}

void displayDoubleIntNum(int x) //����
{
	
	printf("%d\n", x * 2); // ���Ͼ��� ������ִ� �Լ�
	
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


const char* Vending1(char x)  // ���� 

{

	if (x == 'c') return "�ݶ�\n";

	else if (x == 's') return "���̴�\n";

	else if (x == 'h') return "ȯŸ\n";

	else return "���Ǿ���\n";

}





 
