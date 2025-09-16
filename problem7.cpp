#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a+b+c==180) {
        cout << "The triangle is valid" << endl;
    }
    else {
        cout << "The triangle is not valid" << endl;
    }
    return 0;
}