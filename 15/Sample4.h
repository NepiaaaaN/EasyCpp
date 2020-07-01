#include <iostream>
using namespace std;

//Array Class Template
template <class T>
class Array{
    private:
        T data[5];
    public:
        void setData(int num, T d);
        T getData(int num);
};

template <class T>
void Array<T>::setData(int num, T d){
    if(num < 0 || num > 4) cout << "配列の範囲を超えています" << endl;
    else data[num] = d;
}
template <class T>
T Array<T>::getData(int num){
    if(num < 0 || num > 4){
        cout << "配列の範囲を超えています" << endl;
        return data[0];
    }else return data[num];
}