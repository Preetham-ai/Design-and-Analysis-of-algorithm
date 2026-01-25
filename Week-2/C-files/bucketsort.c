#include <stdio.h>
#define MAX 100
int arr[MAX];
int size = 0;
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
void bucketSort() {
    int buckets[10][MAX];
    int count[10];
    int i, j, k, max = 0;
    for (i = 0; i < 10; i++) count[i] = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    for (i = 0; i < size; i++) {
        int idx = (arr[i] * 10) / (max + 1);
        buckets[idx][count[idx]++] = arr[i];
    }
    for (i = 0; i < 10; i++) {
        for (j = 1; j < count[i]; j++) {
            int key = buckets[i][j];
            k = j - 1;
            while (k >= 0 && buckets[i][k] > key) {
                buckets[i][k + 1] = buckets[i][k];
                k--;
            }
            buckets[i][k + 1] = key;
        }
    }
    k = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < count[i]; j++) {
            arr[k++] = buckets[i][j];
        }
    }
}
int main() {
    int n;
    printf("CH.SC.U4CSE24113\n");
    printf("Enter number of elements:");
    scanf("%d", &n);
    readArray(n);
    printf("\nOriginal array: ");
    display(size);
    bucketSort();
    printf("\nSorted array (Ascending Order): ");
    display(size);
    return 0;
}
