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
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}
int main(){
  printf("CH.SC.U4CSE24139\n");
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
