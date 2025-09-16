#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    float x1 = (-b + sqrt((b*b - 4*a*c)))/(2*a);
    float x2 = (-b - sqrt((b*b - 4*a*c)))/(2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}