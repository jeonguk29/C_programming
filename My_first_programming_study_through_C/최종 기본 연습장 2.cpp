#include <stdio.h>
#define second_por_minute 60 
#include <math.h>
int main (void)
{
	int input = 1000;
	int minute = input/second_por_minute; 
	int second = input%second_por_minute;
	printf("1000�ʴ� %d �� %d �� �Դϴ�.\n",minute,second);
	
	int x = 0;
	printf("���� x�� ����? %d �Դϴ�.\n",x); 
	printf("���� x�� ����? %d �Դϴ�.\n",x++); 
	printf("���� x�� ����? %d �Դϴ�.\n",x); 
	printf("���� x�� ����? %d �Դϴ�.\n",++x); 
	printf("���� x�� ����? %d �Դϴ�.\n",x+10); 
	
	
	int y =50;
	printf("y�� ����? %d �Դϴ�.\n",y);
	y+=50;
	printf("y�� ����? %d �Դϴ�.\n",y);
	y-=50;
	printf("y�� ����? %d �Դϴ�.\n",y);
	y*=50;
	printf("y�� ����? %d �Դϴ�.\n",y);
	y/=50;
	printf("y�� ����? %d �Դϴ�.\n",y);
	y%=50;  
	printf("y�� ����? %d �Դϴ�.\n",y);
	
	int a =100;
	int b =200;
	printf("a�� b�� ���� ������? %d\n",a==b);
	printf("a�� b�� ���� �ٸ���? %d\n",a!=b);
	printf("a�� b���� ���� ū��? %d\n",a > b);
	printf("a�� b���� ���� ������? %d\n",a < b);
	
	printf("a�� b���� ���� �۰� 50���� ū��? %d\n",(a < b) && (a > 50));
	printf("a�� b���� ���� �۰� 50���� ������? %d\n",(a < b) && (a < 50));
	
	printf("a�� b���� ���� ������ 50���ٴ� ũ�� %d\n",(a < b) || (a > 50));
	printf("b�� a���� ���� ������ 50���ٴ� �۴� %d\n",(b < a) || (b < 50));
	
	int c = -50;
	int d =  30;
	int absolutex = (c > 0)? c : -c;
	
	int max = (c > d)? c:d ;
	int min = (c < d)? c:d ;
	
	printf("���� %d\n",absolutex);
	printf("�ִ� %d\n",max);
	printf("�ּڰ� %d\n",min);
	
	double e = pow(2.0,20.0);
	printf("2�� 20������? %.0f \n",e);
	
	int f = pow(20,4);
	printf("20�� 4������? %d \n",f);
	
	return 0;
}
