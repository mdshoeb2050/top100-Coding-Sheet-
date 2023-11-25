#include <stdio.h>

void countFrequency(int arr[], int size) {
    printf("Element\tFrequency\n");

    for (int i = 0; i < size; i++) {
        int count = 1;
        // Check if the element is counted
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    // Mark the counted element as -1 to avoid counting it again
                    arr[j] = -1;
                }
            }
            printf("%d\t%d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}
