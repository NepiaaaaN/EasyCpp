#include "Sample4.h"

int main(){
    cout << "int型の配列を作成します" << endl;
    Array<int> i_array;
    i_array.setData(0, 80);
    i_array.setData(1, 60);
    i_array.setData(2, 58);
    i_array.setData(3, 77);
    i_array.setData(4, 57);

    for(int i = 0; i < 5; i++) cout << i_array.getData(i) << endl;

    cout << "double型の配列を作成します" << endl;
    Array<double> d_array;
    d_array.setData(0, 35.5);
    d_array.setData(1, 45.6);
    d_array.setData(2, 26.8);
    d_array.setData(3, 76.2);
    d_array.setData(4, 85.5);

    for(int j=0; j<5; j++) cout << d_array.getData(j) << endl;  //一つずつ出力していく

    return 0;
}