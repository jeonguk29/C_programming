#include <stdio.h>
#define second_par_one_minute 60 /////���⼭ �پ� ���� ���� �׷��� ����� ����ϰų� �ִ��� �����ϰ� 
#include <math.h>// pow �� �ŵ����� �� abs ���� �Լ��� ����Ҽ��ְ� ���ִ� ���̺귯����  
int main (void)
{ 
   int input =1000;
   int minute = input/second_par_one_minute;
   int second = input%second_par_one_minute;
   printf("%d�ʴ� %d�� %d�� �Դϴ�.",input ,minute ,second);
   
   
   //////////////////////////////////////////////
   
   //�⺻����������  
   int x=0;
   printf("���� x�� ���� %d�Դϴ�.\n",x);
   x++;
   printf("���� x�� ���� %d�Դϴ�.\n",x++);
   printf("���� x�� ���� %d�Դϴ�.\n",x--);
   printf("���� x�� ���� %d�Դϴ�.\n",x);
   printf("���� x�� ���� %d�Դϴ�.\n",++x);
   printf("���� x�� ���� %d�Դϴ�.\n",--x);
   printf("���� x�� ���� %d�Դϴ�.\n",x-2);
   
   int y = 100;
   //���տ�����  
   printf("���� y�� ���� %d�Դϴ�.\n",y);
   y+=50;
   printf("���� y�� ���� %d�Դϴ�.\n",y);
   y-=50;
   printf("���� y�� ���� %d�Դϴ�.\n",y++);
   y+=50;
   printf("���� y�� ���� %d�Դϴ�.\n",y);
   printf("���� y�� ���� %d�Դϴ�.\n",--y);
   printf("���� y�� ���� %d�Դϴ�.\n",y*50);
   printf("���� y�� ���� %d�Դϴ�.\n",y/50);
   y%=4;
   printf("���� y�� ���� %d�Դϴ�.\n",y);
   
   
   int z= 50;
   int a= 30;
   // ���迬���� 
   printf("����z�� a�� ������?%d\n",z==a); 
   printf("����z�� a�� �ٸ���?%d\n",z!=a);// �׻� =�� �ڿ� �����ڰ� �տ� ���⼭ �������� �׿� ���� ������   
   printf("����z�� a���� ū��?%d\n",z > a);
   printf("����z�� a���� ������?%d\n",z < a);
   //�� ������ 
   printf("z�� a���� ũ�� 40 �̸��Դϱ�?%d\n",(z > a)&&(z<60));//�ϳ��� Ʋ���� 0��
   printf("z�� a���� �۰ų� Ȥ�� a�� 30�Դϱ�?%d\n",(z<a)||(a==30));
   printf("z�� 50�� �ƴմϱ�?%d\n",z!=50);
   printf("z�� 50 �Դϱ�?%d\n",z==50);
   
   //���ǿ�����  
   int b= -50;
   int c= 30;
   int absolutex = (b>0)? b : -b;
   int max = (b>c)? b:c;
   int min = (b<c)? b:c;
   printf("b�� ������ %d�Դϴ�\n",absolutex);
   printf("��Ʈb�� c�� �ִ���%d�Դϴ�.\n",max);   
   printf("��Ʈb�� c�� �ּڰ���%d�Դϴ�.\n",min);
   
   //�ŵ�����������
   double d = pow(2.0, 20.0);
   printf("2�� 20������ %.0f�Դϴ�.\n",d);  
   
   int e = pow(3, 30);
   printf("3�� 30������ %d�Դϴ�,\n",e);



   return 0;
}
