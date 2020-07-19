#include <iostream>
#include <iomanip>
using namespace std;

//Point Classの宣言
class Point{
    private:
        int x;
        int y;
    public:
        Point(int a = 0, int b = 0){x = a; y = b;} //Constructor
        void setX(int a);
        void setY(int b);
        void show();
        //プラス演算子のオーバーロード
        Point operator++();
        Point operator++(int d);
        friend Point operator+(Point p1, Point p2);
        friend Point operator+(Point p, int a);
        friend Point operator+(int a, Point p);

        //マイナス演算子のオーバーロード
        Point operator--();
        Point operator--(int d);
        friend Point operator-(Point p1, Point p2);
        friend Point operator-(Point p, int a);
        friend Point operator-(int a, Point p);
};

//Point Class メンバ関数の定義
void Point::setX(int a){x = a;}
void Point::setY(int b){y = b;}
void Point::show(){ cout << " x : " << setw(3) << x << " y : " << setw(3) <<  y << endl ;}

//プラス演算子のオーバーロード
Point Point::operator++(){
    x++;
    y++;
    return *this;
}
Point Point::operator++(int d){
    Point p = *this;
    x++;
    y++;
    return p;
}
//フレンド関数の定義
Point operator+(Point p1, Point p2){
    Point tmp;
    tmp.x = p1.x + p2.x;
    tmp.y = p1.y + p2.y;
    return tmp;
}
Point operator+(Point p, int a){
    Point tmp;
    tmp.x = p.x + a;
    tmp.y = p.y + a;
    return tmp;
}
Point operator+(int a, Point p){
    Point tmp;
    tmp.x = a + p.x;
    tmp.y = a + p.y;
    return tmp;
}

//マイナス演算子のオーバーロード
Point Point::operator--(){
    x--;
    y--;
    return *this;
}
Point Point::operator--(int d){
    Point p = *this; //先に受け取った時のポインタを確保
    x--; //計算処理
    y--;
    return p; //受け取った際のポインタを返却(実際に渡したobjectでは計算がされている)
}
//フレンド関数の定義
Point operator-(Point p1, Point p2){
    Point tmp;
    tmp.x = p1.x - p2.x;
    tmp.y = p1.y - p2.y;
    return tmp;
}
Point operator-(Point p, int a){
    Point tmp;
    tmp.x = p.x - a;
    tmp.y = p.y - a;
    return tmp;
}
Point operator-(int a, Point p){
    Point tmp;
    tmp.x = a - p.x;
    tmp.y = a - p.y;
    return tmp;
}