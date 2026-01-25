#include<stdio.h>
int arr[100];
int n;
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void Sort(int arr[]){
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[min]>arr[j]){
        min=j;
      }
    }
    if(min!=i){
      swap(&arr[min],&arr[i]);
    }
  }
}
int main(){
  printf("CH.SC.U4CSE24113\n");
  printf("Enter no. of elements to insert:");
  scanf("%d",&n);
  printf("Enter elements followed by a space");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  Sort(arr);
  printf("Sorted array is:");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);
  }
}
