#include <iostream>
#include <typeinfo> //typeid演算子を使用するためにtypeinfoHeaderをinclude
#include <cxxabi.h>
using namespace std;

// memory leaks
char* demangle(const char *demangle) {
    int status;
    return abi::__cxa_demangle(demangle, 0, 0, &status);
}

//Vehicle(乗り物) Classの宣言(Abstruct Class)
class Vehicle{
    protected:
        int speed;
    public:
        void setSpeed(int s);
        virtual void show() = 0; //pure virtual function show()です
};

//CarClassの宣言(DerivedClass)
class Car : public Vehicle{
    protected:
        int num;
        double gas;
    public:
        Car(int n, double g);
        void show();
};

//PlaneClassの宣言(DerivedClass)
class Plane : public Vehicle{
    private:
        int flight;
    public:
        Plane(int f);
        void show();
};

//Vehicle Class Member関数の定義
void Vehicle::setSpeed(int s){
    speed = s;
    cout << "I set to speed at" << speed << ".\n";
}

//CarClassMember関数の定義
Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "I made a car of" << " Number " << num << ", Amount of gasoline " << gas << ".\n";
}
void Car::show(){
    cout << "Car number is " << num << ".\n";
    cout << "Car's amount of gasoline is " << gas << ".\n";
    cout << "Car's speed is " << speed << ".\n";
}

//Plane Class Menber 関数の定義
Plane::Plane(int f){ //Constructor
    flight = f;
    cout << "I made a plane of flight number is " << flight << ".\n";
}
void Plane::show(){
    cout << "Plane of flight number is " << flight << " .\n";
    cout << "Speed is " << speed << ".\n";
}

int main(){
    Vehicle* pVc[2]; //Abstruct ClassへのPointerの配列を準備
    Car car1(1234, 20.5); //Derived ClassのConstructorに初期値を設定
    Plane pln1(232); //Derived ClassのConstructorに初期値を設定

    pVc[0] = &car1; //AbstructorClass型へのPointerにDerivedClass(Car Class)のアドレスを代入
    pVc[1] = &pln1; //AbstructorClass型へのPointerにDerivedClass(Plane Class)のアドレスを代入

    for(int i=0; i<2; i++){
        if(typeid(*pVc[i]) == typeid(Car)){ //Classが同じであるかどうか調べる
            cout << (i+1) << "番目は" << demangle(typeid(Car).name()) << "です。\n"; //name member関数からObjectのClass名を調べることが出来る
        }
        else{
            cout << (i+1) << "番目は" << demangle(typeid(Car).name()) << "ではありません。 " << demangle(typeid(*pVc[i]).name()) << "です。\n";
        }
    }

    pVc[0]->setSpeed(60);   //CarのSpeedを設定
    pVc[1]->setSpeed(500);  //PlaneのSpeedを設定

    for(int i=0; i<2; i++){
        pVc[i]->show();
    }

    return 0;
}