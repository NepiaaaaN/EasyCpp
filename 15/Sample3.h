#include <iostream>
#include <cstring>
using namespace std;

//Car Classの宣言
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(const char* pN, int n, double g); //constructor
        ~Car(); //destructor
        Car(const Car& c); //Copy constructor
        Car& operator=(const Car& c); //代入演算子のオーバーロード
};

//Car Class menber関数の定義
Car::Car(const char* pN, int n, double g){
    pName = new char[strlen(pN)+1]; //constructor内でメモリを動的に確保
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << pName << "を作成しました" << endl;
}
Car::~Car(){
    cout << pName << "を破棄します" << endl;
    delete[] pName; //確保したメモリを解放
}
Car::Car(const Car& c){ //CopyConstructor
    cout << c.pName << "で初期化します" << endl;
    pName = new char[strlen(c.pName) + strlen("のコピー1") + 1];
    strcpy(pName, c.pName);
    strcat(pName, "のコピー1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c){ //代入演算子のオーバーロード
    cout << pName << "に" << c.pName << "を代入します" << endl;
    if(this != &c){ //コピー先のObject自身による代入を除く
        delete[] pName; //コピー先のobjectがすでに確保しているメモリを解放する
        cout << c.pName << "で初期化します" << endl;
        pName = new char[strlen(c.pName) + strlen("のコピー2") + 1]; //代入するobjectのpName + のコピー1分のバイト数 + 1バイト を動的に確保
        strcpy(pName, c.pName); //コピー先のObjectのためにメモリを確保する
        strcat(pName, "のコピー2"); //pName(コピーするObjectの内容に書き換え済)に"のコピー2"を連結
        num = c.num;
        gas = c.gas;
    }
    return *this; //渡されたObjectのアドレスを返す
}
