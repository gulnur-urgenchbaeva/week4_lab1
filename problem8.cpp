#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    char a;
    cin>>a;
    if ((('a'<=a) and (a<='z')) or (('A'<=a) and (a<='Z'))){
        if (('a'<=a) and (a<='z')) {
            cout << "Lowercase alphabet" << endl;
        }
        else if (('A'<=a) and (a<='Z')) {
            cout << "Uppercase alphabet" << endl;
        }
    }
    else {
        cout << "It is not an alphabet" << endl;
    }
    return 0;
}