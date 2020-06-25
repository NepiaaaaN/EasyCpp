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
        Car(const char* pN, int n, double g);
        ~Car();
        void show();
}

//続きから書く