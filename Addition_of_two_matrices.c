#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j;
	printf("Enter number of rows and columns for first matrix :\n");
	scanf("%d%d", &r1,&c1);
	int a[r1][c1];
	printf("Enter %d elements for First matrix :\n",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The first matrix is :\n");
		for(i=0;i<r1;i++)
	    {
		 for(j=0;j<c1;j++)
		  {
			printf("%d\t",a[i][j]);
		  }
		  printf("\n");
      	}
	printf("Enter number of rows and columns for second matrix :\n");
	scanf("%d%d", &r2,&c2);
	int b[r2][c2];
	printf("Enter %d elements for second matrix :\n",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The second matrix is :\n");
		for(i=0;i<r2;i++)
	    {
		 for(j=0;j<c2;j++)
		  {
			printf("%d\t",b[i][j]);
		  }
		  printf("\n");
      	}
      	if(r1==r2 && c1==c2)
      	{
      		int add[r1][c2];
      		printf("The sum of two matrices is :\n");
      		for(i=0;i<r1;i++)
	       {
		   for(j=0;j<c2;j++)
		   {
			add[i][j] = a[i][j] + b[i][j];
			printf("%d\t", add[i][j]);
		  }
		  printf("\n");
      	}
		}
		else
		{
			printf("\nAddition of two matrices is not possible. As the order of two matrices is different.");
		}
      	
      	return 0;
}
