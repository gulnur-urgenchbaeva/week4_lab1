#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    if ((a>b) and (a>c)) {
        cout<< a << " is the largest" << endl;
    }
    else if ((b>c) and (b>a)) {
        cout<< b << " is the largest" << endl;
    }
    else {
        cout<< c << " is the largest" << endl;
    }
    return 0;
}