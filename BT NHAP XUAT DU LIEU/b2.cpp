#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Nhap so nguyen X (X > 1): ";
    cin >> X;

    if (X > 1) {
        if (X % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "X phai lon hon 1!" << endl;
    }

    return 0;
}


