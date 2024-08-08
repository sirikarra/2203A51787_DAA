/*
WEEK 3-3 NEELIMA:
Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number.
*/

#include<stdio.h>

struct products{
	char p_name[100];
	int p_id;
	int priority;
};

void sort(struct products p1[], int n) {
   int i,key,j;
    for (i=1;i<n;i++) {
        key=p1[i].priority;
        j = i - 1;
        while (j>=0&&p1[j].priority>key) {
            p1[j + 1].priority=p1[j].priority;
            j--;
        }
        p1[j+1].priority=key;
    }
}

int main(){
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	struct products p1[n];
	for(i=0;i<n;i++){
		printf("Enter %d product name,product id & priority number\n",i+1);
		scanf("%s%d%d",p1[i].p_name,&p1[i].p_id,&p1[i].priority);
	}
	sort(p1,n);
	printf("After Sorting Product priorities:\n");
	for(i=0;i<n;i++){
		printf("%d\n",p1[i].priority);
	}
	return 0;
}
