/*
week 3-1_SURESH
In an online bookstore, there are thousands of books available for purchase. The
bookstore's website allows customers to search for books based on various criteria,
such as title, author, publication date, and price. if a customer searches for books by
a specific title and price, the program can arrange the search results by price, from
low to high or vice versa, based on the customer's preference.
*/
#include<stdio.h>
struct bookstrore{
  char b_name[15],b_author[15];
  float b_price;
};

int ascen(struct bookstrore s1[],int n){
  int i,j;
  float temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(s1[j].b_price>s1[j+1].b_price){
				temp=s1[j].b_price;
				s1[j].b_price=s1[j+1].b_price;
				s1[j+1].b_price=temp;
			}
		}
	}
}

int descen(struct bookstrore s1[],int n){
  int i,j;
  float temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(s1[j].b_price<s1[j+1].b_price){
				temp=s1[j].b_price;
				s1[j].b_price=s1[j+1].b_price;
				s1[j+1].b_price=temp;
			}
		}
	}
}

int main() {
  int n,i,var;
  printf("Enter number of books:\n");
  scanf("%d",&n);
  struct bookstrore s1[n];
  printf("Enter book details:\n");
  for(i=0;i<n;i++){
    printf("Enter book %d details :\n",i+1);
    printf("Enter book name,author name, price:\n");
    scanf("%s%s%f",s1[i].b_name,s1[i].b_author,&s1[i].b_price);
  }
  printf("Type 1 for sorting book price in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(s1,n);
  } else{
    descen(s1,n);
  }
  printf("The sorted prices are:\n");
  for(i=0;i<n;i++){
    printf("%.2f\n",s1[i].b_price);
  }
  return 0;
}
