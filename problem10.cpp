#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int x,y;
    cin>>x>>y;
    float num = ((x-0)*(x-0)) + ((y-0)*(y-0));
    if (sqrt(num)<=10) {
        cout << "Point (" << x << ", " << y << ") is in circle" << endl;
    }
    else {
        cout << "Point (" << x << ", " << y << ") is not in circle" << endl;
    }
    return 0;
}