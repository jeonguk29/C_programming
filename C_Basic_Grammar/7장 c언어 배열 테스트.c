#include <stdio.h>
#include <limits.h>
#define NUMBER 5
int main (void)
{
	// 배열을 이용한 5개의 정수중에서 최댓값 최솟값을 찿아 출력 하는 프로그램  
	int i,max,max2,min,index,index2;
	int array[NUMBER];
	min = INT_MAX;
	max = 0;
	max2 = 0;
	index = 0;
	index2 = 0;
	// array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언 
	// array[0] = 30, array[1] = 34, array[2] = 72, array[3] = 35, array[4] = 90 
	
	for(i=0;i<NUMBER;i++)
	{
		scanf("%d",&array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
		if (min > array[i])
		{
			min = array[i];
			index2 = i;
		}
		
	}
	printf("가장 큰 값은 %d 입니다. %d 번째에 있습니다.\n",max,index+1);
	printf("가장 작은 값은 %d 입니다. %d 번째에 있습니다.\n",min,index2+1);
	
	
	
	max = 0;
	index = 0;
/*	
	
	for(i=0;i<NUMBER;i++)
	{
		scanf("%d",&array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	printf("가장 작은 값은 %d 입니다. %d 번째에 있습니다.\n",min,index+1);
*/


// 5개의 정수 중에서 짝수 최댓값과 홀수 최댓값을 구하는 프로그램  
   	for(i=0;i<NUMBER;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2 == 0) 
		{
			if(max < array[i])
	    	{
			max = array[i];
			index = i;
		    }
		}
       if(array[i]%2 == 1) 
		{
			if(max2 < array[i])
	    	{
			max2 = array[i];
			index2 = i;
		    }
		}
		
	}
	printf("짝수중 가장 큰 값은 %d 입니다. %d 번째에 있습니다.\n",max,index+1);
	printf("홀수중 가장 큰 값은 %d 입니다. %d 번째에 있습니다.\n",max2,index2+1);
	
// 나동빈 꺼 
	
	int oddMax =0;
	int evenMax =0;
	for(i=0;i < NUMBER;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2 == 0) 
		{
			if(evenMax < array[i])
	    	{
		    	evenMax = array[i];
		    }
		}
		else 
		{
			if(oddMax < array[i])
	    	{
		    	oddMax = array[i];
		    }
		}
	}
	printf("%d %d",oddMax,evenMax);
	
	
	
	
	
	return 0;
}
