#include <iostream>
using namespace std;

void input(int *array, int number);
void output(int *array, int number);

int main(){
    int num;
    int * array;


    cout << "How much you want to input ?：" ;
    cin >> num ;

    array = new int[num]; /*メモリ確保*/

    cout << "Ok, please input count that you input number some time ago：" ;
    input(array,num);
    output(array,num);
    delete[] array;
    cout << "Thank you so much for inputing." << endl ;
    return 0;

}

void input(int *array , int number){
    cout << endl;
    for(int i = 0; i < number; i++){
        cout << i+1 << " : " ;
        cin >> array[i] ;
    }
}

void output(int *array , int number){
    cout << "input number :" ;
    for(int i = 0; i < number; i++){
        cout << array[i] ;
    }
    cout << endl;
}