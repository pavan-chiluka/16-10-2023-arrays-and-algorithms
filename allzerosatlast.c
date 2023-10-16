#include<stdio.h>
int main()
{
	int i,j=0;
	int arr1[5]={1,0,0,2,3};
	int len1=(sizeof(arr1)/sizeof(arr1[0]));
	int arr2[len1];
	for(i=0;i<len1;i++)
	{
		if(arr1[i]!=0)
		{
			arr2[j]=arr1[i];
			j++;
		}
	}
	for(i=0;i<len1;i++)
	{
		if(arr1[i]==0)
		{
		arr2[j]=arr1[i];
		j++;
		}
	}
	 for(i=0;i<len1;i++)
        {
                printf("%d",arr2[i]);
        }
}


	
		

