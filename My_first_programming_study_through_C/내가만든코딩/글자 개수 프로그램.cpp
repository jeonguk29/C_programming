#include <stdio.h>
int count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_E = 0, count_F = 0, count_G = 0, count_H = 0, count_I = 0, count_J = 0, count_K = 0, count_L = 0
,count_M = 0, count_N = 0, count_O = 0, count_P = 0, count_Q = 0, count_R = 0, count_S = 0, count_T = 0, count_U = 0, count_V = 0, count_W = 0, count_X = 0, count_Y = 0
, count_Z = 0;
char input[1001];

void print (void); 
int main (void)
{
		// �ϳ��� ���ڿ��ȿ� ���ڼ� ����  
	gets(input);   // ��ǲ�̶�� ĳ���� �迭 �ȿ� (input ��ü�� ù��° �ּҴϱ�) �״������� ����ڰ� �Է��ϴ� ���ڿ��� ���͸� ĥ������ ���� ���� �ǹ���     
	print();
	//HELLO\0
	
	return 0;
 } 
 
 
 
 
 void print (void)
 {
 	int count = 0;
 		while(input[count] != '\0')
	{ 
		if(input[count] == 'A' || input[count] == 'a')
		{
			count_A++;
		}
		else if(input[count] == 'B' || input[count] == 'b')
		{
			count_B++;
		} 
			else if(input[count] == 'C' || input[count] == 'c')
		{
			count_C++;
		} 
			else if(input[count] == 'D' || input[count] == 'd')
		{
			count_D++;
		} 
			else if(input[count] == 'E' || input[count] == 'e')
		{
			count_E++;
		} 
			else if(input[count] == 'F' || input[count] == 'f')
		{
			count_F++;
		} 
			else if(input[count] == 'G' || input[count] == 'g')
		{
			count_G++;
		} 
			else if(input[count] == 'H' || input[count] == 'H')
		{
			count_H++;
		} 
			else if(input[count] == 'I' || input[count] == 'i')
		{
			count_I++;
		} 
			else if(input[count] == 'J' || input[count] == 'j')
		{
			count_J++;
		} 
			else if(input[count] == 'K' || input[count] == 'K')
		{
			count_K++;
		} 
			else if(input[count] == 'L' || input[count] == 'l')
		{
			count_L++;
		}  
			else if(input[count] == 'M' || input[count] == 'm')
		{
			count_M++;
		}  
			else if(input[count] == 'N' || input[count] == 'n')
		{
			count_N++;
		}  
			else if(input[count] == 'O' || input[count] == 'o')
		{
			count_O++;
		}  
		    else if(input[count] == 'P' || input[count] == 'p')
		{
			count_P++;
		}  	
		    else if(input[count] == 'Q' || input[count] == 'q')
		{
			count_Q++;
		}  	
		    else if(input[count] == 'R' || input[count] == 'r')
		{
			count_R++;
		}   
	    	else if(input[count] == 'S' || input[count] == 's')
		{
			count_S++;
		}   
	    	else if(input[count] == 'T' || input[count] == 't')
		{
			count_T++;
		} 
		  	else if(input[count] == 'U' || input[count] == 'u')
		{
			count_U++;
		}  
		  	else if(input[count] == 'V' || input[count] == 'v')
		{
			count_V++;
		}  
		  	else if(input[count] == 'W' || input[count] == 'w')
		{
			count_W++;
		}
		  	else if(input[count] == 'X' || input[count] == 'x')
		{
			count_X++;
		}  
		  	else if(input[count] == 'Y' || input[count] == 'y')
		{
			count_Y++;
		}  
		  	else if(input[count] == 'Z' || input[count] == 'z')
		{
			count_Z++;
		}      
		count++;
	}
	printf("���ڿ��� ���̴� %d �Դϴ�.\n",count);
	printf("============================================================\n");
	printf("�Է��� ���ڿ���\n%s �Դϴ�.\n",input); // %s���� ���������� �ΰ��� ���϶����� ����϶��� ����� ������ ���� 
	printf("============================================================\n");
	printf("���ڿ����� A�� %d �� ���Խ��ϴ�.\n",count_A);
	printf("���ڿ����� B�� %d �� ���Խ��ϴ�.\n",count_B);
	printf("���ڿ����� C�� %d �� ���Խ��ϴ�.\n",count_C);
	printf("���ڿ����� D�� %d �� ���Խ��ϴ�.\n",count_D);
	printf("���ڿ����� E�� %d �� ���Խ��ϴ�.\n",count_E);
	printf("���ڿ����� F�� %d �� ���Խ��ϴ�.\n",count_F);
	printf("���ڿ����� G�� %d �� ���Խ��ϴ�.\n",count_G);
	printf("���ڿ����� H�� %d �� ���Խ��ϴ�.\n",count_H);
	printf("���ڿ����� I�� %d �� ���Խ��ϴ�.\n",count_I);
	printf("���ڿ����� J�� %d �� ���Խ��ϴ�.\n",count_J);
	printf("���ڿ����� K�� %d �� ���Խ��ϴ�.\n",count_K);
	printf("���ڿ����� L�� %d �� ���Խ��ϴ�.\n",count_L);
	printf("���ڿ����� M�� %d �� ���Խ��ϴ�.\n",count_M);
	printf("���ڿ����� N�� %d �� ���Խ��ϴ�.\n",count_N);
	printf("���ڿ����� O�� %d �� ���Խ��ϴ�.\n",count_O);
	printf("���ڿ����� P�� %d �� ���Խ��ϴ�.\n",count_P);
	printf("���ڿ����� Q�� %d �� ���Խ��ϴ�.\n",count_Q);
	printf("���ڿ����� R�� %d �� ���Խ��ϴ�.\n",count_R);
	printf("���ڿ����� S�� %d �� ���Խ��ϴ�.\n",count_S);
	printf("���ڿ����� T�� %d �� ���Խ��ϴ�.\n",count_T);
	printf("���ڿ����� U�� %d �� ���Խ��ϴ�.\n",count_U);
	printf("���ڿ����� V�� %d �� ���Խ��ϴ�.\n",count_V);
	printf("���ڿ����� W�� %d �� ���Խ��ϴ�.\n",count_W);
	printf("���ڿ����� X�� %d �� ���Խ��ϴ�.\n",count_X);
	printf("���ڿ����� Y�� %d �� ���Խ��ϴ�.\n",count_Y);
	printf("���ڿ����� Z�� %d �� ���Խ��ϴ�.\n",count_Z);	
										

 }
