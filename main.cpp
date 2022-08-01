#include<iostream>
using namespace std;

int main() {

    int n = 1;
    int m = 4;
    int k = m % 2 + m / 2;
    int arr[n][m];
    int newArray[n][k];

    cout << "Enter 4 numbers: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\n Matrix of Odd Numbers:\n";

    int l = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j % 2 == 0) {
                newArray[i][l] = arr[i][j];
                l++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << newArray[i][j] << ' ';
        }
    }
    cout << endl;
    return 0;
}