#include<iostream>
using namespace std;

//Base0 Classの宣言
class Base0{
    protected:
        int bs0;
    public:
        Base0(int b0 = 0){bs0 = b0;}
        void showBs0(){ cout << "bs0は" << bs0 << "です" << endl; };
};

//Base1 Classの宣言
class Base1 : public virtual Base0{ //virtualを付けて仮想基本クラスとして継承する
    protected:
        int bs1;
    public:
        Base1(int b1 = 0) {bs1 = b1;}
        void showBs(){ cout << "bs1は" << bs1 << "です" << endl; };
};

//Bass2 Classの宣言
class Base2 : public virtual Base0{ //virtualを付けて仮想基本クラスとして継承する
    protected:
        int bs2;
    public:
        Base2(int b2 = 0){bs2 = b2;}
        void showBs(){ cout << "bs2は" << bs2 << "です" << endl; };
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

    drv.showBs0(); //Bass Class 0のメンバ関数を呼び出し
    //もし仮想基本クラスにしていないと、Base1とBase2のどちらのBase0からメンバを呼び出せばよいかわからないためエラーが発生する

    return 0;
}