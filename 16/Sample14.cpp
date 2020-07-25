#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ifstream fin("test1.txt");
    if(!fin){
        cout << "Fileを読み込むことができませんでした" << endl;
        return 1;
    }

    const int num = 10;
    char temp[num][16]; //二次元配列、一つ目は番地、二つ目は文字列のサイズ
    int test[num];
    for(int i=0; i<num; i++){
        fin >> temp[i] >> test[i]; //文字列(No.)をtempに、点数をtest配列に入力
    }
    int max = test[0];
    int min = test[0];
    for(int j=0; j<num; j++){
        if(max < test[j]) max = test[j]; //maxよりもtestの今の番地の数値のほうが大きい場合、maxを更新(初期値はtest[0])
        if(min > test[j]) min = test[j]; //minよりもtestの今の番地の数値のほうが小さい場合、minを更新(初期値はtest[0])
        cout << "No." << j+1 << setw(5) << test[j] << endl;
    }
    cout << "最高点は" << max << "です" << endl;
    cout << "最低点は" << min << "です" << endl;

    fin.close();
    return 0;
}