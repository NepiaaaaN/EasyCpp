#include <fstream>
#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main(){
    ofstream fout("test1.txt"); //Fileを開くやと思ってたけど、勝手に作るやん笑
    if(!fout){ //foutがtrueでない場合
        cout << "Fileをopenできませんでした" << endl;
        return 1; //異常(失敗)を返す
    }

    int num;

    cout << "何人分のデータを作成しますか？ : ";
    cin >> num;

    int test[num];

    cout << num << "人の点数を入力して下さい" << endl;
    for(int n=0; n<num; n++){
        cin >> test[n];
    }

    for(int j=0; j<num; j++){
        fout << "No." << j+1 << setw(5) << test[j] << endl;
    }

    fout.close();
    return 0;
}