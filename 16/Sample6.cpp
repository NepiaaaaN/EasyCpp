#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::left, ios::adjustfield); //左寄せで出力, 出力位置を指定
    for(int i=0; i<=5; i++){
        cout.width(5);
        cout.fill('-');
        cout << i;
    }
    cout << endl;

    cout.unsetf(ios::left); //左寄せを解除

    cout.setf(ios::right, ios::adjustfield); //右寄せで出力, 出力位置を指定
    for(int j=0; j<=5; j++){
        cout.width(5);
        cout.fill('-');
        cout << j;
    }
    cout << endl; //cout << '\n'でもOK

    return 0;
}