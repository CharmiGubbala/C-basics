#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before Sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	bubble_sort(arr,n);
	printf("\nAfter Sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

