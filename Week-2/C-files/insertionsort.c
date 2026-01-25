#include<stdio.h>
int arr[100];
int n;
void Sort(int arr[]){
  for(int i=1;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    while(j>=0 && temp<arr[j]){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
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
