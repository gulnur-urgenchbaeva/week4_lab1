#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int a, b;
    cin>>a>>b;
    if (a%b==0){
        cout << a << " is divisible by " << b << endl;
    }
    else {
        cout << a << " is not divisible by " << b << endl;
    }
    return 0;
}