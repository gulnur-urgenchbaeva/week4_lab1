#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float w1, p1;
    cout << "Enter weight and price for package 1: " << endl;
    cin >> w1 >> p1;
    float w2, p2;
    cout << "Enter weight and price for package 2: " << endl;
    cin >> w2 >> p2;
    float c1 = w1/p1;
    float c2 = w2/p2;
    if (c1>c2) {
        cout << "Package 1 has a better price" << endl;
    }
    else if (c2>c1){
        cout << "Package 2 has a better price" << endl;
    }
    else {
        cout << "Two packages have same price" << endl;
    }
    return 0;
}