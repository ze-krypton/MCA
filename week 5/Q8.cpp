#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100], b[100], c[200];

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter first sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter second sorted array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];z
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    cout << "Merged sorted array: ";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}

