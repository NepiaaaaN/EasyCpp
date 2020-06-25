#include <iostream>
using namespace std;

//Carクラスの宣言
class Car{
  private:
    int num;
    double gas;
  public:
    static int sum; //static を付けたので静的データメンバ
    Car();
    void setCar(int n, double g);
    void show();
    static void showSum(); //静的メンバ関数
};

//Carクラスメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0.0;
    sum++;
    cout << "Made a car.🚘\n";
}
void Car::setCar(int n, double g){
  num = n;
  gas = g;
  cout << "Made a car of" << " Number " << num << " Amount of gasoline " << gas << ".\n";
}

void Car::showSum(){ //静的メンバ関数の定義
    cout << "There are " << sum << " cars in all.\n";
}

void Car::show(){
  cout << "Car number is " << num << ".\n";
  cout << "Amount of gasoline is " << gas << ".\n";
}

int Car::sum = 0; //静的データメンバを初期化

//Car class の利用
int main(){
    //静的メンバ関数を呼び出し
    //静的メンバ関数はObjectを生成していなくても呼び出すことが出来る😏
    Car::showSum();

    Car car1; //Objectの生成
    car1.setCar(1234, 20.3);

    Car::showSum(); //もう一度静的メンバ関数を呼び出し

    Car car2;
    car2.setCar(4567, 30.5);

    Car::showSum();

    return 0;
}