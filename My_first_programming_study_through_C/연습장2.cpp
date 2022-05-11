#include <stdio.h>
#define second_par_one_minute 60 /////여기서 뛰어 쓰기 못함 그래서 언더바 사용하거나 최대한 간결하게 
#include <math.h>// pow 즉 거듭제곱 과 abs 절댓값 함수를 사용할수있게 해주는 라이브러리임  
int main (void)
{ 
   int input =1000;
   int minute = input/second_par_one_minute;
   int second = input%second_par_one_minute;
   printf("%d초는 %d분 %d초 입니다.",input ,minute ,second);
   
   
   //////////////////////////////////////////////
   
   //기본증감연산자  
   int x=0;
   printf("현재 x의 값은 %d입니다.\n",x);
   x++;
   printf("현재 x의 값은 %d입니다.\n",x++);
   printf("현재 x의 값은 %d입니다.\n",x--);
   printf("현재 x의 값은 %d입니다.\n",x);
   printf("현재 x의 값은 %d입니다.\n",++x);
   printf("현재 x의 값은 %d입니다.\n",--x);
   printf("현재 x의 값은 %d입니다.\n",x-2);
   
   int y = 100;
   //복합연산자  
   printf("현재 y에 값은 %d입니다.\n",y);
   y+=50;
   printf("현재 y에 값은 %d입니다.\n",y);
   y-=50;
   printf("현재 y에 값은 %d입니다.\n",y++);
   y+=50;
   printf("현재 y에 값은 %d입니다.\n",y);
   printf("현재 y에 값은 %d입니다.\n",--y);
   printf("현재 y에 값은 %d입니다.\n",y*50);
   printf("현재 y에 값은 %d입니다.\n",y/50);
   y%=4;
   printf("현재 y에 값은 %d입니다.\n",y);
   
   
   int z= 50;
   int a= 30;
   // 관계연산자 
   printf("변수z와 a가 같은가?%d\n",z==a); 
   printf("변수z와 a가 다른가?%d\n",z!=a);// 항상 =이 뒤에 연산자가 앞에 여기서 오류나면 및에 꺼도 오류남   
   printf("변수z는 a보다 큰가?%d\n",z > a);
   printf("변수z는 a보다 작은가?%d\n",z < a);
   //논리 연산자 
   printf("z가 a보다 크고 40 미만입니까?%d\n",(z > a)&&(z<60));//하나만 틀려도 0임
   printf("z가 a보다 작거나 혹은 a가 30입니까?%d\n",(z<a)||(a==30));
   printf("z가 50이 아닙니까?%d\n",z!=50);
   printf("z는 50 입니까?%d\n",z==50);
   
   //조건연산자  
   int b= -50;
   int c= 30;
   int absolutex = (b>0)? b : -b;
   int max = (b>c)? b:c;
   int min = (b<c)? b:c;
   printf("b의 절댓값은 %d입니다\n",absolutex);
   printf("인트b와 c의 최댓값은%d입니다.\n",max);   
   printf("인트b와 c의 최솟값은%d입니다.\n",min);
   
   //거듭제곱연산자
   double d = pow(2.0, 20.0);
   printf("2에 20제곱은 %.0f입니다.\n",d);  
   
   int e = pow(3, 30);
   printf("3에 30제곱은 %d입니다,\n",e);



   return 0;
}
