#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "パラメータの数が違います" << endl;
        return 1; //異常を返す
    }
    ifstream fin(argv[1]); //コマンドラインから受け取った文字列のファイルを開く
    if(!fin){
        cout << "ファイルを開くことができませんでした" << endl;
        return 1;
    }

    char ch; //読み込み・出力する変数。一文字で処理を実施していくため文字列じゃなくていい
    fin.get(ch); //ファイルから一文字読み込む

    while(!fin.eof()){ //ファイルの終わりまで繰り返す
        cout.put(ch); //一文字出力
        fin.get(ch); //一文字読み込む
    }

    fin.close();

    return 0;
}