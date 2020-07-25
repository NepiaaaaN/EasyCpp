#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream fout("test0.txt"); //Fileを開くやと思ってたけど、勝手に作るやん笑
    if(!fout){ //foutがtrueでない場合
        cout << "Fileをopenできませんでした" << endl;
        return 1; //異常(失敗)を返す
    }else cout << "Fileをopenしました" << endl;

    fout.close();
    cout << "Fileをcloseしました" << endl;
    return 0;
}