#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int s;
    cin>>s;
    if (s<20) {
        cout<<"too slow"<<endl;
    }
    else if (s>80) {
        cout << "too fast" << endl;
    }
    else {
        cout << "just right" << endl;
    }
    return 0;
}