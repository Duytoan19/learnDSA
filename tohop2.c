#include <stdio.h>
#define MAX 20
int n, k, DD[MAX];
void kq()
{
	int j;
	for( j = 1; j <= k; j++)
	{
		printf("%d", DD[j]);
	}
	printf("\n");
}
void dd(int i)
{
	int j;
	for(j =DD[i-1]+1; j < n-k+i; j++)
	{
		DD[i]=j;
		if(i==k)
			kq();
		else
			dd(i+1);
	}
}
int main()
{
	scanf("%d%d", &n, &k);
	int i;
	for(i =1; i <= k; i++)
	{
		DD[i]=0;
	}
	dd(1);

}
