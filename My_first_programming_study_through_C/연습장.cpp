#include <stdio.h>
#include <limits.h>
#define todayfood 3 
#define SECOND_POR_MINUTE 60
int main (void)
{
	int x= 500;
	int y= INT_MAX;
	int a= 10;
	int b= 20 ;
	double z= 123456789.1234567;
	printf("���� x�� �޸�ũ���? %d �Դϴ�.\n" ,sizeof x);
	printf("���� x�� ����? %d �Դϴ�.\n", x);
	printf("���� z�� �Ҽ��� 3��°�ڸ� ���� ���� ����ϸ� %.3f\n", z);
	printf("���� y�� �ִ��� %d�Դϴ�.\n", y);
	printf("���� y�� �ִ񰪿��� 1�� ���ϸ� %d�Դϴ�.\n", y+1);
	printf("���� a-b ����? %d �Դϴ�.\n", a-b);
	printf("���� a+b ����? %d �Դϴ�.\n", a+b);
	printf("���� a*b ����? %d �Դϴ�.\n", a*b);
    printf("���� a/b ����? %d �Դϴ�.\n", a/b);
	///////////////////////////////////////////////////////

	double calorie = 1000.3;
	printf("todaycalorie%.2f\n",todayfood*calorie);
	
	char q='g';
	char w='u';
	char e='c';
	char r='c';
	char t='l';
	printf("%c",q);
	printf("%c",w);
	printf("%c",e);
	printf("%c",r);
	printf("%c\n",t);
	
	int d= 100;
	char f= 'f';
	printf("%c\n",d);
	printf("%d\n",f);
	printf("10������ ���: %d\n",d);
    printf("8������ ���: %o\n",d);
	printf("16������ ���: %x\n",d);
	
///////////////////////////////////////////////////////////////////////////////

	
	return 0;
}
