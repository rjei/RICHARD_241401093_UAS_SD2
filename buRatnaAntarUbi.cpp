#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string kata, bersih = "";
    cout << "Masukkan kata atau kalimat untuk diperiksa:" << endl;
    getline(cin, kata);

    for(char c : kata) {
        if (isalnum(c)) {
            bersih += tolower(c);
        }
    }

    int i = 0;
    int j = bersih.length() - 1;
    bool palindrome = true;

  
    while (i < j) {
        if (bersih[i] != bersih[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        cout << "True";
    else
        cout << "False";

    return 0;
}
