#include <iostream>
using namespace std;

//Carクラスの宣言
class Car{
  private:
    int num;
    double gas;
  public:
    // Car(); ←こいつを消して
    // Car(int n, double g); ←こいつにdefault引数を設定する
    Car(int n = 0, double g = 0);
    void show();
};

//Carクラスメンバ関数の定義

/*引数のないコンストラクタの定義 は必要無くなる
Car::Car(){
  num = 0;
  gas = 0.0;
  cout << "車を作成しました。\n";
}
*/

Car::Car(int n, double g){
  num = n;
  gas = g;
  cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。👨‍👦‍👦\n";
}

void Car::show(){
  cout << "車のナンバーは" << num << "です。\n";
  cout << "ガソリン量は" << gas << "です。\n";
}

//main文
int main(){
  Car car1; //引数を渡さないObjectを生成
  Car car2(1234, 12.5); //引数を渡すObjectを生成

  return 0;
}