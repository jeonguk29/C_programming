#include <stdio.h>
#define size 5 // 학생의 수  

struct student {
	int number;
	char name [20];
	double grade; // GPA => 학점  
};
int main (void)
{
	struct student list[size];
	int i;
	
	for(i=0;i<size;i++)
	{
		printf("학번을 입력하세요 : ");
		scanf("%d",&list[i].number);
		printf("이름을 입력하세요 : ");
		scanf("%s",&list[i].name); // 구조체 안에 배열은 이러한 식으로 들어감 자료형이 구조체라 배열이름 앞에 &도 필요 구조체 안에 다양한 블럭들이 있기 때문 
		printf("학점을 입력하세요 : ");  // 그리고 입력(데이터)을 넣을때 객체라 . 로 구분해서 넣어줌   
		scanf("%lf",&list[i].grade);                          
    }
    
    for(i=0;i<size;i++)
    {  
        printf("\n%d번째 학생\n",i+1);
    	printf("\n학번: %d\n이름: %s\n학점: %.1f\n",list[i].number,list[i].name,list[i].grade);
	}
	
	return 0;
}
 
 // 이런식으로 구조체를 활용하면 하나의 학생이 가지고 있는 정보 = 학번, 이름, 학점 에 대한 내용들을 아주 체계적으로 관리하고 저장하며 다룰수 있게 되는것임  
