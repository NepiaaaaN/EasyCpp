#include "Sample1.h"
//#include <iostream> と using namespace std; はheaderFileで定義済

int main(){
    Point p1(1,2);
    Point p2(3,6);
    p1 = p1+p2;
    Point p3 = ++p1; //前置後置インクリメントは代入時に効果の違いを発揮する
    p3.show();
    p1 = p1+3;
    p2 = 3+p2;

    p1.show();
    p2.show();

    return 0;
}