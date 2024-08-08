/*
week 3-3_SURESH
Imagine you are working for a large online marketplace like Amazon or eBay. One
of the critical functionalities of such platforms is to display products to customers in
a way that is relevant, helpful, and easy to navigate. Customers can browse through
thousands or even millions of products, and Many users prefer to see products sorted
by price, either in ascending or descending order. This allows them to find the
cheapest or most expensive products within their budget. So, implement an
application to arrange the products based on price.
*/

#include<stdio.h>
struct e_commerce{
  char p_name[15];
  float price;
};

int ascen(struct e_commerce e1[],int n){
    int i,key,j;
    for (i=1;i<n;i++) {
        key=e1[i].price;
        j = i - 1;
        while (j>=0&&e1[j].price>key) {
            e1[j + 1].price=e1[j].price;
            j--;
        }
        e1[j+1].price=key;
    }
}

int descen(struct e_commerce e1[],int n){
    int i,key,j;
    for (i=1;i<n;i++) {
        key=e1[i].price;
        j = i - 1;
        while (j>=0&&e1[j].price<key) {
            e1[j + 1].price=e1[j].price;
            j--;
        }
        e1[j+1].price=key;
    }
}

int main() {
  int n,i,var;
  printf("Enter number of products:\n");
  scanf("%d",&n);
  struct e_commerce e1[n];
  printf("Enter product details:\n");
  for(i=0;i<n;i++){
    printf("Enter product %d details :\n",i+1);
    printf("Enter product name, price:\n");
    scanf("%s%f",e1[i].p_name,&e1[i].price);
  }
  printf("Type 1 for sorting book price in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(e1,n);
  } else{
    descen(e1,n);
  }
  printf("The sorted prices are:\n");
  for(i=0;i<n;i++){
    printf("%.2f\n",e1[i].price);
  }
  return 0;
}
