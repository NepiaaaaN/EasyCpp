#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "1~9までの数字を入力してください" << endl;
    cin >> num;

    try{
        if(num <= 0)
            throw "0以下を入力しました";
        if(num >= 10)
            throw "10以上を入力しました";

        cout << num << "です。" << endl;
    }

    catch(const char* err){ //ここをconst char*にしないと、正しくcatchせずclashする...今まではchar* errと書いていた...
        cout << "エラー:" << err << endl;
        return 1;
    }
    return 0;
}