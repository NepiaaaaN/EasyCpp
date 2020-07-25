#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for (int i=0; i<=10; i++){
        cout << setw(3) << i; //出力幅指定
    }
    cout << endl;

    return 0;
}