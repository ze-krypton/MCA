#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;

        if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;

    return 0;
}

