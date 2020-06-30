#include "Sample3.h"

/*
    Objectの代入 / 初期化は代入演算子のオーバーロード(代入のため) / コピーコンストラクタ(初期化のため) を使用しないと正しく行われない。
    よってこのサンプルコードでは、代入演算子のオーバーロード / コピーコンストラクタを使った練習をする
*/

int main(){
    Car mycar("mycar", 1234, 25.5);

    Car car1 = mycar; //Objectの初期化

    Car car2("Car2", 0, 0);
    car2 = mycar; //Objectの代入

    return 0;
}