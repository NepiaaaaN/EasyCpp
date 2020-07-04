#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    vector<int> vt; //vectorを利用する(vectorテンプレートクラスはint型)

    cout << "いくつ整数データを入力しますか？" << endl;
    cin >> num;

    cout << "整数を入力してください" << endl;
    for(int i=0; i<num; i++){ //入力した数分だけループを回す
        int data;
        cin >> data; //vector配列に入力する数字を入力
        vt.push_back(data); //vector配列に入力した数字を挿入
    }

    cout << "表示します" << endl;
    vector<int>::iterator it = vt.begin(); //先頭のデータを取得
    //vectorテンプレートクラス内で名前が付けられているiteratorは、1つずつデータを指し示すためのクラス
    while(it != vt.end()){ //末尾のデータではないとき、繰り返す
        cout << "[";
        cout << *it; //そのアドレスに格納されているデータにアクセス
        cout << "] ";
        it++; //次のデータに進む
    }
    cout << endl;
}