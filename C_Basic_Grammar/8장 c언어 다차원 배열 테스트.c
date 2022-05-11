#include <stdio.h>
int main (void)
{
	// 1차원 배열 을 초기화 하여 구구단 출력하기  
	int i,j,index;
	int array[9]={1,2,3,4,5,6,7,8,9};
			
	printf("몇단을 출력 하시겠어요? :");
	scanf("%d",&index);
	
	for(i=0;i<9;i++)
	{
		printf("%d \n",index*array[i]);
	}
	
	// 구구단을 이용하여 2차원 배열 출력하기  
	int gugudan[10][10];
	for(i=1;i<=9;i++)
	{
		printf("\n %d단 \n\n",i);
		for(j=1;j<=9;j++)
		{
			gugudan[i][j]=i*j;
			printf("%d x %d = %d \n",i,j,gugudan[i][j]);
		}
	}
	
	
	// 학생점수의 총합 
	int score[5][2];// 학생의 수와 영어점수 수학점수 
	int total[2]={ 0,}; //1차원 배열을 할당할때 모든데이터의 값을 넣어주겠다는 뜻 즉 두개만큼의 공간 을 할당 했기 때문에 index 0,1이 존재하면 그안에 값이 0 이됨  
	for(i=0;i<5;i++)
	{
		printf("%d번의 학생의 수학점수와 영어점수를 입력 해주세요: \n",i+1);
		scanf("%d %d",&score[i][0],&score[i][1]);
	}
	for(i=0;i<5;i++)
	{
		total[0]+=score[i][0];
		total[1]+=score[i][1];
	} 
	
	printf("5명의 학생들의 수학 총점은 %d점\n5명의 학생들의 영어 총점은 %d점\n",total[0],total[1]);
	return 0;
}
