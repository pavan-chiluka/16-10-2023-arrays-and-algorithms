#include<stdio.h>

int quicksort(int arr[],int l,int h);
int part(int arr[],int l,int h);

int main()
{
int n,i;
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("before sorting");

printf("\n");

for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}

printf("\n");
printf("after sorting");
quicksort(arr,0,n-1);
for(i=0;i<n;i++)
{
 printf("%d",arr[i]);
}

}
int quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
	int lock=part(arr,l,h);
	quicksort(arr,l,lock-1);
	quicksort(arr,lock+1,h);
	}
}
int part(int arr[],int l,int h)
{
   int pivot=arr[l];
   int start=l;
   int end=h;
	while(arr[start]<=pivot)
	{
		start++;
	}
	while(arr[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
		int temp=arr[start];
	        arr[start]=arr[end];
		arr[end]=arr[temp];
	}
  int temp=arr[l];
  arr[l]=arr[end];
  arr[end]=temp;
  return end;
 }







