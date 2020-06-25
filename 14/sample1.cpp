#include <iostream>
using namespace std;

//CarClassの宣言(BassClass)
class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void setCar(int n, double g);
        void show();
};

//RacingClassの宣言(DerivedClass)
class RacingCar : public Car{
    private:
        int cource;
    public:
        RacingCar();
        RacingCar(int n, double g, int c);
        void setCource(int c);
};

//CarClassMember関数の定義
Car::Car(){
    num = 0;
    gas = 0;
    cout << "I made 🚗 .\n";
}
Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "I made a car of" << " Number " << num << "Amount of gasoline " << gas << ".\n";
}
void Car::setCar(int n, double g){
    num = n;
    gas = g;
    cout << "I changed number to " << num << ", " << "Amount of gasoline to " << gas << ".\n";
}
void Car::show(){
    cout << "Car number is " << num << ".\n";
    cout << "Car's amount of gasoline is " << gas << ".\n";
}

//RacingCar ClassMenber関数の定義
RacingCar::RacingCar(){
    cource = 0;
    cout << "I made a 🏎 .\n" ;
}

//BassClassの引数2個のConstructorが呼び出されるようにするには、": Bassクラス名(引数)と書く必要がある
RacingCar::RacingCar(int n, double g, int c) : Car(n ,g){
    cource = c;
    cout << "I made a racingcar of cource number is " << cource << ".\n";
}
void RacingCar::setCource(int c){
    cource = c;
    cout << "I seted cource number to " << cource << ".\n";
}

int main(){
    RacingCar rccar;
    RacingCar rccar1(1234, 20.5, 5); //DerivedClassの引数3個のConstructorが呼び出されるようにする
    for(int i = 0; i < 5; i++){
        rccar1.setCource(i);
    };

    return 0;
}