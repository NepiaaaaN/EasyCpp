#include "Practice.h"
//#include <iostream> と using namespace std; はheaderFileで定義済

int main(){
    cout << "+側の処理" << endl;
    Point p1(1,2);
    Point p2(3,6);
    p1 = p1+p2;
    p1.show();
    Point p3 = ++p1; //前置後置インクリメントは代入時に効果の違いを発揮する
    p3.show();
    p1 = p1+3;
    p2 = 3+p2;

    p1.show();
    p2.show();

    cout << "-側の処理" << endl;
    Point p4(3,6);
    Point p5(1,2);
    p4 = p4-p5;
    p4.show();
    Point p6 = --p4; //前置後置インクリメントは代入時に効果の違いを発揮する
    p6.show();
    p4 = p4-3;
    p5 = 3-p5;

    p4.show();
    p5.show();

    return 0;
}