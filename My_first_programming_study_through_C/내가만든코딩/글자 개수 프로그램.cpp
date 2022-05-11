#include <stdio.h>
int count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_E = 0, count_F = 0, count_G = 0, count_H = 0, count_I = 0, count_J = 0, count_K = 0, count_L = 0
,count_M = 0, count_N = 0, count_O = 0, count_P = 0, count_Q = 0, count_R = 0, count_S = 0, count_T = 0, count_U = 0, count_V = 0, count_W = 0, count_X = 0, count_Y = 0
, count_Z = 0;
char input[1001];

void print (void); 
int main (void)
{
		// 하나의 문자열안에 글자수 세기  
	gets(input);   // 인풋이라는 캐릭터 배열 안에 (input 자체가 첫번째 주소니까) 그다음으로 사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는 것을 의미함     
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
	printf("문자열의 길이는 %d 입니다.\n",count);
	printf("============================================================\n");
	printf("입력한 문자열은\n%s 입니다.\n",input); // %s또한 내부적으로 널값이 보일때까지 출력하라라는 기능을 가지고 있음 
	printf("============================================================\n");
	printf("문자열에서 A는 %d 번 나왔습니다.\n",count_A);
	printf("문자열에서 B는 %d 번 나왔습니다.\n",count_B);
	printf("문자열에서 C는 %d 번 나왔습니다.\n",count_C);
	printf("문자열에서 D는 %d 번 나왔습니다.\n",count_D);
	printf("문자열에서 E는 %d 번 나왔습니다.\n",count_E);
	printf("문자열에서 F는 %d 번 나왔습니다.\n",count_F);
	printf("문자열에서 G는 %d 번 나왔습니다.\n",count_G);
	printf("문자열에서 H는 %d 번 나왔습니다.\n",count_H);
	printf("문자열에서 I는 %d 번 나왔습니다.\n",count_I);
	printf("문자열에서 J는 %d 번 나왔습니다.\n",count_J);
	printf("문자열에서 K는 %d 번 나왔습니다.\n",count_K);
	printf("문자열에서 L는 %d 번 나왔습니다.\n",count_L);
	printf("문자열에서 M는 %d 번 나왔습니다.\n",count_M);
	printf("문자열에서 N는 %d 번 나왔습니다.\n",count_N);
	printf("문자열에서 O는 %d 번 나왔습니다.\n",count_O);
	printf("문자열에서 P는 %d 번 나왔습니다.\n",count_P);
	printf("문자열에서 Q는 %d 번 나왔습니다.\n",count_Q);
	printf("문자열에서 R는 %d 번 나왔습니다.\n",count_R);
	printf("문자열에서 S는 %d 번 나왔습니다.\n",count_S);
	printf("문자열에서 T는 %d 번 나왔습니다.\n",count_T);
	printf("문자열에서 U는 %d 번 나왔습니다.\n",count_U);
	printf("문자열에서 V는 %d 번 나왔습니다.\n",count_V);
	printf("문자열에서 W는 %d 번 나왔습니다.\n",count_W);
	printf("문자열에서 X는 %d 번 나왔습니다.\n",count_X);
	printf("문자열에서 Y는 %d 번 나왔습니다.\n",count_Y);
	printf("문자열에서 Z는 %d 번 나왔습니다.\n",count_Z);	
										

 }
