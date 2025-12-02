#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Mau berapa iterasi?";
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        if (n % 2 == 0)
            cout << "Output: " << 0 << endl;
        else
            cout << "Output: " << x << endl;
    }


    return 0;
}
