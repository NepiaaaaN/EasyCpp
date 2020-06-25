#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "変数aに値を代入してね：";
    cin >> a ;
    cout << "OK, " << a << "回目だけスキップするわ" << endl;
    
    for(int i=1; i<5; i++){
        if(i == a){
            cout << "great!!!!!!!" << endl;
            continue;“
        }
        cout << i << "回目やで" << endl;
    }
return 0;
}