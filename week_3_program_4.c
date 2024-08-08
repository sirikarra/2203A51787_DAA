/*
WEEK 3-1 NEELIMA:
Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination.
*/
#include<stdio.h>
#include<string.h>
struct store
{
	char item[100];
	float cost;
	int destination;
};

int sort(struct store s1[],int n)
{
  int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(s1[j].destination>s1[j+1].destination){
				temp=s1[j].destination;
				s1[j].destination=s1[j+1].destination;
				s1[j+1].destination=temp;
			}
		}
	}
}

int main()
{
	int i,n;
	printf("Enter number of items:\n");
	scanf("%d",&n);
	struct store s1[n];
	for(i=0;i<n;i++)
	{
		printf(" Enter item %d details\n",i+1);
		printf("Item name,Destination time & cost:\n");
		scanf("%s%d%f",s1[i].item,&s1[i].destination,&s1[i].cost);
	}
	sort(s1,n);
	printf("Sorted Destinations are as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",s1[i].destination);
	}
	return 0;
}
