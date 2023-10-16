#include<stdio.h>
int mergesort(int arr[],int l,int h);
int  merge(int arr[],int l,int mid,int h);
int main()
{
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("before sorting\n");
for(i=0;i<n;i++)
{
        printf("%d",arr[i]);
}
printf("\n");
mergesort(arr,0,n-1);
printf("after sorting");
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
}
int mergesort(int arr[],int l,int h)
{
	if(l<h)
	{
	int mid=(l+h)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid+1,h);
	merge(arr,l,mid,h);
	}
}
int merge(int arr[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l,b[50];
       while((i<=mid)&&(j<=h))
	  {
		  if(arr[i]<=arr[j])
		  {
			  b[k]=arr[i];
			  k++,i++;
		  }
		  else
		  {
			 b[k]= arr[j];
			 j++,k++;
		  }
	  }
       if(i>mid)
       {
	       while(j<=h)
	       {
		       b[k]=arr[j];
		       k++,j++;
	       }
	}
       else
       {
	       while(i<=mid)
	       {
		       b[k]=arr[i];
		       k++,i++;
               }
	}
 for(k=l;k<=h;k++)
 {
	 arr[k]=b[k];
 }
}






