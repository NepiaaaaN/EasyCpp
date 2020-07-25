#include <fstream> //ファイル入出力用にinclude
#include <iostream>
using namespace std;

int main(){
    ifstream fin("test0.txt"); //Fileを読み込み
    if(!fin){
        cout << "Fileをopenできませんでした" << endl;
        return 1;
    }

    char str1[16]; //Fileから読み込む用の文字列
    char str2[16]; //Fileから読み込む用の文字列2
    fin >> str1 >> str2; //データを読み込んで文字列に読み込んでいる
    cout << "ファイルに書き込まれている2つの文字列は" << endl;
    cout << str1 << "です" << endl;
    cout << str2 << "です" << endl;

    fin.close(); //自動で実施してくれるらしいが念の為
    return 0;
}