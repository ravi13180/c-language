#include <stdio.h>

void find_elements(int arr[], int n) {
    int element_count[101] = {0};  // Create a count array initialized to 0

    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        if (arr[i] < 101) {
            element_count[arr[i]]++;
        }
    }

    int found = 0;
    // Print elements whose value equals their count
    for (int i = 0; i < n; i++) {
        if (arr[i] < 101 && element_count[arr[i]] == arr[i]) {
            printf("%d ", arr[i]);
            element_count[arr[i]] = 0; // Ensure each element is printed only once
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    find_elements(arr, n);

    return 0;
}

