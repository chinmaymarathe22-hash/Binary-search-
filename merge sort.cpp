#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int lrr[n1], rrr[n2];

    for (int i = 0; i < n1; i++)
        lrr[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        rrr[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (lrr[i] <= rrr[j]) {
            arr[k] = lrr[i];
            i++;
        } else {
            arr[k] = rrr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = lrr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rrr[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[6] = {10, 20, 35, 45, 50, 85};

    cout << "Unsorted array :: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    mergesort(arr, 0, 5);

    cout << "\nSorted array :: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}

