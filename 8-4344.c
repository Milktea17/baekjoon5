#include <stdio.h>
#include <string.h>

int main(){
	int C, i, j, student;

	scanf("%d",&C);

	double result[C];
	memset(result,0,sizeof(result));

	for(i = 0 ; i < C ; i++)
	{
		scanf("%d",&student);
		if(student < 1 || student > 1000)
		{
			printf("[student = %d]1~1000사이의 정수만 입력하세요\n",student);
			return -1;
		}

		int score[student];
		double avg = 0;

		memset(score,0,sizeof(score));

		for(j=0 ; j< student; j++)
		{
			scanf("%d",&score[j]);
			if(score[j] < 0 || score[j] > 100)
			{
				printf("[score = %d]0~100사이의 정수만 입력하세요\n",score[j]);
				return -1;
			}

			avg += score[j];
		}

		avg = (int)avg/student;
		printf("avg:%f\n",avg);

		for(j=0 ; j< student; j++)
		{
			if(score[j] > avg)
			{
				result[i] += 1;
			}
		}

		if(result[i] != 0)
			result[i] = result[i]/student;

	}

	for(i = 0 ; i < C ; i++)
	{
		result[i] *= 100;
		printf("%.3f%\n",result[i]);
	}
	return 0;

}
