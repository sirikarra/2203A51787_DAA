/*
week 3-2_SURESH
Courier and logistics companies handle a massive volume of packages daily. These
packages need to be efficiently sorted and routed to their destinations to ensure
timely and accurate deliveries. Each package typically has a unique barcode that
contains essential information like the recipient's address, delivery method, and
tracking number. So, implement an application to arrange the packages based on
tracking numbers.
*/
#include<stdio.h>
struct package{
  char c_state[10],c_city[10],del_method[10];
  int c_pincode,tracking_num;
};

int ascen(struct package p1[],int n){
  int i,j,indx,temp;
  for(i=0;i<n-1;i++){
    indx=i;
    for(j=i+1;j<n;j++){
      if(p1[j].tracking_num<p1[indx].tracking_num){
        indx=j;
      }
    }
    temp = p1[indx].tracking_num;
    p1[indx].tracking_num = p1[i].tracking_num;
    p1[i].tracking_num = temp;
  }
}

int descen(struct package p1[],int n){
  int i,j,indx,temp;
  for(i=0;i<n-1;i++){
    indx=i;
    for(j=i+1;j<n;j++){
      if(p1[j].tracking_num>p1[indx].tracking_num){
        indx=j;
      }
    }
    temp = p1[indx].tracking_num;
    p1[indx].tracking_num = p1[i].tracking_num;
    p1[i].tracking_num = temp;
  }
}

int main() {
  int n,i,var;
  printf("Enter number of packages:\n");
  scanf("%d",&n);
  struct package p1[n];
  printf("Enter package details:\n");
  for(i=0;i<n;i++){
    printf("Enter package %d details :\n",i+1);
    printf("Enter customers city,state,pincode,delivery method and tracking number:\n");
    scanf("%s%s%d%s%d",p1[i].c_city,p1[i].c_state,&p1[i].c_pincode,p1[i].del_method,&p1[i].tracking_num);
  }
  printf("Type 1 for sorting book price in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(p1,n);
  } else{
    descen(p1,n);
  }
  printf("\n\nThe sorted tracking numbers are:\n");
  for(i=0;i<n;i++){
    printf("%d\n",p1[i].tracking_num);
  }
  return 0;
}
