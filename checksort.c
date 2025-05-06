//Check if Array is Sorted
#include <stdio.h>

int main() {
    int n, arr[100], fAsc = 1, fDesc = 1;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in ascending order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            fAsc = 0;
        }
        if (arr[i] < arr[i + 1]) {
            fDesc = 0;
        }
    }

    if (fAsc) {
        printf("The array is sorted in ascending order.\n");
    } else if (fDesc) {
        printf("The array is sorted in descending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
