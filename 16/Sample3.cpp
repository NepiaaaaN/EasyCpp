#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<=10; i++){
        cout.width(3);
        cout << i;
        // これだと先頭に0が付いてしまうcout << cout.width(3) << i;
    }
    cout << '\n';

    return 0;
}