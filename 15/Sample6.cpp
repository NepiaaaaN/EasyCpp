#include <iostream>
#include <vector>
#include <algorithm> //algorithmをinclude
//これで標準テンプレートライブラリのalgorithmを使用することが出来る
using namespace std;

int main(){
    vector<int> vt;
    int num;

    cout << "いくつ整数データを入力しますか？" << endl;
    cin >> num;

    cout << "整数を入力してください" << endl;
    for(int i=0; i<num; i++){ //入力した数分だけループを回す
        int data;
        cin >> data; //vector配列に入力する数字を入力
        vt.push_back(data); //vector配列に入力した数字を挿入
    }

    vector<int>::iterator it = vt.begin(); //vectorというテンプレートクラスのint型でitという変数を作成
    cout << "並べ替え前は";
    while(it != vt.end()){
        cout << "[";
        cout << *it; //そのアドレスに格納されているデータにアクセス
        cout << "] ";
        it++;
    }
    cout << "です" << endl;

    cout << "逆順にします";
    reverse(vt.begin(), vt.end()); //逆順にするreverse関数
    it = vt.begin();
    while(it != vt.end()){
        cout << "[";
        cout << *it; //そのアドレスに格納されているデータにアクセス
        cout << "] ";
        it++;
    }
    cout << "です" << endl;

    cout << "並べ替え前は";
    sort(vt.begin(), vt.end()); //小さい順から並べ替えるsort関数
    it = vt.begin();
    while(it != vt.end()){
        cout << "[";
        cout << *it; //そのアドレスに格納されているデータにアクセス
        cout << "] ";
        it++;
    }
    cout << "です" << endl;

    return 0;
}