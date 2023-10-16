#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5]={1,2,3,3,4};
	int len1=(sizeof(arr)/sizeof(arr[0]));
	int i,j,count=0;
	for(i=0;i<len1;i++)
	{
		count=0;
		for(j=0;j<len1;j++)
		{
			if((arr[i]==arr[j])&&(i!=j))
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
		printf("%d",arr[i]);
          	}
	}
}

