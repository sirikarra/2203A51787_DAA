#include<stdio.h>
int n;
void insertionsort(int a[],int n);
int main()
{
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter %d elements :\n", n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements arranged in ascending order using Insertion sort are :");
	insertionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
void insertionsort(int a[n],int n)
{
	int i,j,t;
	for(i=1;i<=(n-1);i++)
	{
		t=a[i];
		for(j=i-1;(j>=0)&&(t<a[j]);j--)
		{
				a[j+1]=a[j];
		}
		a[j+1]=t;
	}
}
