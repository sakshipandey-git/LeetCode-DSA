#include <stdio.h>

void bubblesort(int arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
}

int main() {
    int n;

    printf("Enter size of element: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter elements: ");
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);

    return 0;
}
