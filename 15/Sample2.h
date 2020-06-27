#include <iostream>
#include <cstring>
using namespace std;

//Car Classの宣言
class Car{
    private:
        int num; //車のナンバー
        double gas; //ガソリン量
        char* pName; //名前(複数の文字を入力するためCharのPointer型で宣言)
    public:
        Car(const char* pN, int n, double g); //Constructor
        ~Car(); //Destructor
        void show(); //表示用メソッド
};

//Car Classメンバ関数の宣言
//Constructor
Car::Car(const char* pN, int n, double g){
    pName = new char[strlen(pN) + 1]; //実引数のコピーpNとなる文字＋NULL文字分を追加してメモリを動的に確保
    strcpy(pName, pN); //pNameにpNの内容をコピー
    num = n;
    gas = g;
    cout << pName << "を作成しました。\n" << endl;
}

//Destructor
Car::~Car(){
    cout << pName << "を破棄します\n" << endl;
    delete[] pName; //確保したメモリの破棄
}

//メンバ関数
void Car::show(){
    cout << "車のナンバーは" << num << "です。" << endl;
    cout << "ガソリン量は" << gas << "です。" << endl;
    cout << "名前は" << pName << "です。\n" << endl;
}