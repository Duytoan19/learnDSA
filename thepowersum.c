#include <stdio.h>
#include <math.h>
int dequyPowsum(int X, int N , int num);
int main()
{
	int N,X;
	scanf("%d%d", &X, &N);
	dequyPowsum(X,N,sum);
	printf("%d\n", dequyPowsum(X,N,sum));
	return 1;

	
}
int dequyPowsum(int X, int N , int num)
{
	if(pow(num,N) < X)
		return dequyPowsum(X,N,num+1)+dequyPowsum(X-pow(num,N),N,num+1);
	else
			if(pow(num,N)==X)
				return 1;
			else
				return 0;
}