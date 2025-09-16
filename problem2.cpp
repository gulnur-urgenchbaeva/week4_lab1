#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cin >> n;
    if (n >=0) {
        if (n%2==0) {
            cout << "The number is positive and even" << endl;
        }
        else {
            cout << "The number is positive and odd" << endl;
        }
    }
    else {
        if (n%2==0) {
            cout << "The number is negative and even" << endl;
        }
        else {
            cout << "The number is negative and odd" << endl;
        }
    }
    return 0;
}