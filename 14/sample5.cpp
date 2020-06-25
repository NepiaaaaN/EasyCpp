#include <iostream>
using namespace std;

//CarClassの宣言(BassClass)
class Car{
    protected:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void setCar(int n, double g);
        void show(); //virtualを付けて、仮想関数とする
};

//RacingClassの宣言(DerivedClass)
class RacingCar : public Car{
    private:
        int cource;
    public:
        RacingCar();
        RacingCar(int n, double g, int c);
        void setCource(int c);
        void show(); //RacingCarにもshowメソッドを追加
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
void RacingCar::show(){
    cout << "Racing Car number is " << num << ".\n";
    cout << "Racing Car's amount of gasoline is " << gas << ".\n";
    cout << "Cource Number is " << cource << ".\n";
}

int main(){
    Car* pCars[2]; //BassClassのPointer型を作成
    Car car1; //BassClassのObjectを作成
    RacingCar rccar1; //DerivedClassのObjectを作成

    pCars[0] = &car1; //BassClassのObjectのAddressを代入
    pCars[0]->setCar(1234, 20.5); //BassClassのメンバ関数setCarを呼び出し

    pCars[1] = &rccar1; //DerivedClassのObjectのAddressを代入
    pCars[1]->setCar(4567, 30.5); //DerivedClassのメンバ関数setCarを呼び出し

    for(int i=0; i<2; i++){
        pCars[i]->show(); //BassClassのshow関数を呼び出し
    }
    return 0;
}