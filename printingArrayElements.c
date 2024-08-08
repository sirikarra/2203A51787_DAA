#include<stdio.h>
//printing array elements
int main()
{
	int n;
	printf("Enter number of elements :\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter %d elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
