#include<stdio.h>
int main()
{
	int n,ele,i,count=0;
	scanf("%d%d",&n,&ele);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			count++;
		}
	}
	printf("%d",count);
}

