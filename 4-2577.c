#include <stdio.h>
#include <string.h>

int main(){
	int A,B,C,Multi,i;

	scanf("%d",&A);
	if( 100 > A || A >= 1000)
	{
		printf("[A = %d]A 100~999사이의 정수만 입력하세요\n",A);
		return -1;
	}
	scanf("%d",&B);
	if( 100 > B || B >= 1000)
	{
		printf("[B = %d]B 100~999사이의 정수만 입력하세요\n",B);
		return -1;
	}
	scanf("%d",&C);
	if( 100 > C || C >= 1000)
	{
		printf("[C = %d]C 100~999사이의 정수만 입력하세요\n",C);
		return -1;
	}

	Multi = A*B*C;
	char sMulti[10];
	int array[10];

	memset(sMulti,'\0',10);
	memset(array,0,sizeof(array));

	sprintf(sMulti,"%d",Multi);

	for(i=0;i<10;++i)
	{
		array[sMulti[i]-48] += 1;

//		printf("array[i]:%d\n", array[i]);
	}


	for(i=0;i<10;++i)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}
