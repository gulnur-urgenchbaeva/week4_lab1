#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cin>>n;
    if (n%4==0) {
        if ((n%100==0) and (n%400!=0)) {
            cout << n <<" is not a leap year" << endl;
        }
        else {
            cout << n <<" is a leap year" << endl;
        }
    }
    return 0;
}