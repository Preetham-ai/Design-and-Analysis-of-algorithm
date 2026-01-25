#include <stdio.h>
#define MAX 100
int arr[MAX]; 
int size = 0; 
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
void max_heapify(int n, int i) {
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        max_heapify(n, largest);
    }
}
void buildMaxHeap(int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        max_heapify(n, i);
    }
}
void heapSort() {
    int n = size;    
    buildMaxHeap(n);  
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        max_heapify(i, 0);
    }
    
}
void readArray(int n) {
    size = n;
    printf("Enter the elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void display(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("CH.SC.U4CSE24139\n");   
    printf("Enter number of elements:");
    scanf("%d", &n);
    readArray(n);
    printf("\nOriginal array: ");
    display(size);
    heapSort();
    printf("\nSorted array (Ascending Order): ");
    display(size);  
    return 0;
}
