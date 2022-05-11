#include <stdio.h>
#include <string.h>
#include <math.h> 
// 구조체는 실제 세상에서 존재하는 어떠한것을 프로그램으로 설계할수 있고 (프로그램 전반적인 설계자체를 프로그램 자체만 보고 이해할수 있을 정도로 
// 설계가 잘된프로그램은 구조체가 잘짜여 져있음    

// 학생 정보 구조체  + 학생 정보 구조체 활용  
struct student {
	int number;
	char name[10];
	double grade;
	
};

// 구조체를 이용한 두점 사이의 거리 구하기  
struct point {
	int x;
	int y;  // x와 y좌표  
};


int main(void)
{
	struct student s,s2;
	s.number = 201912047;
	strcpy(s.name,"정정욱") ;
	s.grade = 4.5;
	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n",s.name); 
	printf("학점 : %.1f\n",s.grade); 
	
	printf("학번을 입력하세요 : ");
	scanf("%d",&s2.number);
	printf("이름을 입력하세요 : ");
	scanf("%s",s2.name);      // 문자열은& 안써줘도 됨 배열은 그자체로 포인터의 의미를 가지고 있어서 해당배열의 주소를 의미함 그래서 따로 주소를 가리키는 & 안써도 되는것임   
	printf("학점을 입력하세요 : "); 
	scanf("%lf",&s2.grade); // 더블형은 입력받을때 꼭 lf라고 해줘야함 플랏은 그냥 f만 해도됨  
	
	printf("학번 : %d\n",s2.number);
	printf("이름 : %s\n",s2.name); 
	printf("학점 : %.1f\n",s2.grade); 
	
	//////////////////////////////////////////////
	
	struct point p1,p2; 
	int xDiff ,yDiff; // x좌표의 차이점 y좌표의 차이점  
	double distance; // 두 좌표의 거리 (우리가 구할 답)  
	printf("1번 점의 좌표를 입력하세요 : "); 
	scanf("%d %d",&p1.x, &p1.y);
	
	printf("2번 점의 좌표를 입력하세요 : ");
	scanf("%d %d",&p2.x, &p2.y);
	
	xDiff = p1.x - p2.x;
	yDiff =	p1.y - p2.y;
	
	distance = sqrt(xDiff * xDiff + yDiff * yDiff); // sqrt() 제곱근을 구하는 함수 #include <math.h>  안에 들어 가있음   
	// xDiff * xDiff + yDiff * yDiff 중학교 수학에서 배우는 기본적인 두점 사이의 거리를 구하는 공식  
	printf("두 점 사이의 거리는 %f 입니다.",distance);
	
	
	
	
	return 0;
 } 
