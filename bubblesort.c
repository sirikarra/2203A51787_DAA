#include<stdio.h>
int n;
void bubblesort(int a[],int n);
int main()
{
	int i;
	printf("Enter number of elements :");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter %d elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
}
void bubblesort(int a[n],int n)
{
	int i,j,t;
	for(i=0;i<=(n-2);i++)
	{
		for(j=0;j<=(n-2-i);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nAscending order of elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
