#include <stdio.h>
#include <math.h>

//사각형의 넓이와 둘레를 구하는 프로그램  

struct point { // 좌표 평면 상에서 하나의 점을 의미  
	                
	int x;          // 하나의 점은 이러한 특징이 있음 x좌표 y좌표  
	int y;
};

struct rect {  //rect 사각형을 의미함  
	struct point p1;    // 좌표평면 상에서 사각형의 특징은 두개의 점으로 정의 할수 있음  
 	struct point p2;
 // 가장 왼쪽 위에 있는 점과 오른쪽 아래의 있는 점으로  사각형을 정의 할수 있음                 
};

int main (void)
{
	struct rect r; // 즉 r이라는 이름에  사각형을 하나 만든것 임  
	int w, h, area, peri; // w너비 h높이 area 넓이 peri 둘레   
	
	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d",&r.p1.x,&r.p1.y); 
	
	printf("오른쪽 하단의 좌표를 입력하세요 : ");
	scanf("%d %d",&r.p2.x,&r.p2.y); 
	
	w = abs(r.p2.x - r.p1.x); // w = 너비 (x좌표의 차이점을 이야기함  오른쪽 하단의 좌표가 분명 더클것이기 때문에 오른쪽하단에서 상단을 뻄 ) abs = 절댓값임 음수일경우가 있을수도 있어서 항상 
	h = abs(r.p2.y - r.p1.y);                                                    // 양수로 너비를 구할수 있게 해줌  
	
	area = w * h; // 넓이  
	peri = 2 * w + 2 * h; // 둘레  
	
	printf("사각형의 넓이는 %d 이고, 둘레는 %d입니다.", area,peri);
	return 0;
} 
