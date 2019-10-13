#include <stdio.h>
#include <string.h>

int main(){
	int num[10],i;

	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&num[i]);
		
		if(num[i] < 0 || num[i] > 1000)
		{
			printf("[num[%d] = %d]0~1000사이의 정수만 입력하세요\n",i,num[i]);
			return -1;
		}
	}

	int array[42];

	memset(array,'\0',sizeof(array));

	for(i = 0 ; i < 10 ; i++)
	{
		array[num[i]%42] += 1;
	}

	int result=0;

	for(i = 0 ; i < 42 ; i++)
	{
		if(array[i] != 0)
			result += 1;
	}

	printf("%d\n",result);

	return 0;

}
