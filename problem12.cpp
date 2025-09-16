#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cout << "Enter a three-digit integer: ";
    cin >> n;

    int t = n;
    int rev = 0;

    while (t>0) {
        rev = rev*10 + (t%10);
        t /= 10;
    }

    if (rev==n) {
        cout << n << " is a palindrome" << endl;
    }
    else {
        cout << n << " is not a palindrome" << endl;
    }
    return 0;
}