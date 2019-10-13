#include <stdio.h>
#include <string.h>

int main(){
	int N,i,n;

	scanf("%d\n",&N);
	if( 1 > N || N > 1000000)
	{
		printf("[N = %d]N 1~1000000사이의 정수만 입력하세요\n",N);
		return -1;
	}

	int array[N];
	memset(array,'\0',sizeof(array[N]));

	for(i=0;i<N;++i)
	{
		scanf("%d",&n);

		if( -1000000 > n || n > 1000000)
		{
			printf("[n = %d]n ~1000000~1000000사이의 정수만 입력하세요\n",n);
			return -1;
		}
		array[i]=n;
	}

	int MAX=-1000000,MIN=1000000;

	for(i=0;i<N;++i)
	{
		if(array[i] >= MAX)
			MAX=array[i];
	}

	for(i=0;i<N;++i)
	{
		if(array[i] <= MIN)
			MIN=array[i];
	}

	printf("%d %d\n", MIN, MAX);

	
	return 0;
}
