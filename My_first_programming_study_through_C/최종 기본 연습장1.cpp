#include <stdio.h>
#include <limits.h>
#define months 12
int main (void)
{
	int x = 20;
	    x = 30;    
	printf("%d\n",x);
	printf("%d\n",sizeof x);
	
	int y = INT_MAX;
	printf("��Ʈ���� �ִ� = %d\n",y);
	printf("��Ʈ���� �ּڰ� = %d\n",y+1);
	printf("%d\n",sizeof y);
	
	float z = 123456.123456;
	printf("%.2f\n",z);
	double a = 123456.123456;
	printf("%.6f\n",a);
	
	int b = 10;
	int c = 20;
	printf("b ���ϱ� c�� ? %d \n",b+c);
	printf("b  ����  c�� ? %d \n",b-c);
	printf("b ���ϱ� c�� ? %d \n",b*c);
	printf("b ������ c�� ? %d \n",b/c);
	printf("b ������ c�� �������� ? %d \n",b%c); 
	
	double money = 900.0;
	printf("money x 12 = %.1f\n",money * months);
	
	char d ='l';
	char e ='o';
	char f ='v';
	char g ='e';
	printf("%C%C%C%C\n",d,e,f,g);
	printf("%d %d %d %d\n",d,e,f,g);
	
	int h = 108;
	int i = 111;
	int j = 118;
	int	k = 101;
	printf("%C%C%C%C\n",h,i,j,k);
	
	int l =100;
	printf("100�� 10������ ǥ���ϸ� %d\n",l);
	printf("100��  8������ ǥ���ϸ� %x\n",l);
	printf("100�� 16������ ǥ���ϸ� %o\n",l);
	
	return 0;
}
 
