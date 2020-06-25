#include<iostream>
using namespace std;

//Base1 Classの宣言
class Base1{
    protected:
        int bs1;
    public:
        Base1(int b1 = 0) {bs1 = b1;}
        void showBs1(){ cout << "bs1は" << bs1 << "です" << endl; };
};

//Bass2 Classの宣言
class Base2{
    protected:
        int bs2;
    public:
        Base2(int b2 = 0){bs2 = b2;}
        void showBs2(){ cout << "bs2は" << bs2 << "です" << endl; };
};

//Derived Classの宣言
class Derived : public Base1, public Base2{
    protected:
        int dr;
    public:
        Derived(int d=0){dr = d;} //Constructorには;がいらん
        void showDr(){cout << "drは" << dr << "です" << endl;}; //メンバ関数には;が必要
};

int main(){
    Derived drv; //multiple inheritanceされたDerived Class

    drv.showBs1(); //Bass Class 1のメンバ関数を多重継承した派生クラスのObjectから呼び出し
    drv.showBs2(); //Bass Class 2のメンバ関数を多重継承した派生クラスのObjectから呼び出し
    drv.showDr(); //まあこれは普通に自分のメンバ関数を呼んでるだけやな

    return 0;
}