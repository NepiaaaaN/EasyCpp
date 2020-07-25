#include <iostream>
using namespace std;

int main(){
    cout << "10を10進数で表記すると" << dec << 10 << "です。" << endl;
    cout << "10を8進数で表記すると" << oct << 10 << "です。" << endl;
    cout << "12を8進数で表記すると" << 12 << "です。" << endl; //前回設定したoctマニピュレータが適用される
    cout << "10を16進数で表記すると" << hex << 10 << "です。" << endl;

    return 0;
}