#include <stdio.h>
#define MAX 11
int n, kq[MAX], dd[MAX];
void KQ()
{
	int j; for(j = 1;j  <= n; j++)
	{
		printf("%d", kq[j]);
	}
	printf("\n");
}
void hoanvi(int i)
{
	if(i > n)
		KQ();
	int j;
	for(j =1 ; j <= n ; j++)
	{
		if(dd[j]==0)
		{
			dd[j]=1;
			kq[i]=j;
			hoanvi(i+1);
			dd[j]= 0;
		}

	}
}
int main()
{
	scanf("%d", &n);
	int i;
	for( i = 0; i <= 9; i++)
	{
		dd[i]=0;
	}
	hoanvi(1);
}

