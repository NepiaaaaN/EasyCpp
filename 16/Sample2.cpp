#include <iostream>
using namespace std;

int main(){
    char ch;

    cout << "文字を続けて入力して下さい" << endl;

    while (cin.get(ch)){
        cout.put(ch);
    }

    return 0;
}